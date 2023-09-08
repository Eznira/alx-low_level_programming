#include <stdio.h>
#include <stdlib.h>

/**
 * is_numeric - Checks if the given string contains only digits.
 * @str: The input string to check.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * str_to_int - Converts a string to an integer.
 * @str: The input string to convert.
 *
 * Return: The converted integer value.
 */
int str_to_int(char *str)
{
	int num = 0;

	while (*str)
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num);
}

/**
 * multiply - Multiplies two positive integers.
 * @num1: The first positive integer.
 * @num2: The second positive integer.
 *
 * Return: The result of the multiplication.
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the arguments.
 *
 * Return: 0 on success, 98 if arguments are incorrect or not numeric.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_numeric(argv[1]) || !is_numeric(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = str_to_int(argv[1]);
	num2 = str_to_int(argv[2]);
	result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}
