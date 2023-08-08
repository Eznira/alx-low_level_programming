#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * main - Copies the content of one file to another.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 on success, exit codes on failure.
 */
int main(int argc, char **argv)
{
	int file_from_fd, file_to_fd, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	file_from_fd = open(argv[1], O_RDONLY);
	if (file_from_fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to_fd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		close(file_from_fd);
		exit(99);
	}

	while ((bytes_read = read(file_from_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to_fd, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			close(file_from_fd);
			close(file_to_fd);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close(file_from_fd);
		close(file_to_fd);
		exit(98);
	}

	if (close(file_from_fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_from_fd);
		exit(100);
	}

	if (close(file_to_fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_to_fd);
		exit(100);
	}

	return (0);
}
