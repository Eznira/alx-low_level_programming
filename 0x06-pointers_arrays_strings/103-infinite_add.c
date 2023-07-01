#include <stdio.h>
#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: A pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0, i = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 >= size_r || len2 >= size_r)
		return (0);

	len1--;
	len2--;
	size_r--;

	while (len1 >= 0 || len2 >= 0 || carry)
	{
		if (len1 >= 0)
			sum += n1[len1] - '0';
		if (len2 >= 0)
			sum += n2[len2] - '0';

		sum += carry;
		r[i] = sum % 10 + '0';
		carry = sum / 10;

		i++;
		len1--;
		len2--;
		sum = 0;

		if (i > size_r)
			return (0);
	}

	r[i] = '\0';
	reverse_string(r);

	return (r);
}

/**
 * reverse_string - Reverses a string
 * @s: The string to reverse
 */
void reverse_string(char *s)
{
	int i = 0, j = 0;
	char tmp;

	while (s[i] != '\0')
		i++;

	i--;

	while (j < i)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		j++;
		i--;
	}
}
