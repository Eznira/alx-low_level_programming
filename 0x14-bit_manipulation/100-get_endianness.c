#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int test;
	char *check_endianness;

	test = 1;
	check_endianness = (char *)&test;

	if (*check_endianness)
		return (1);
	else
		return (0);
}
