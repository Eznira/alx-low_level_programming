#include <stdio.h>

/**
 * print_name - Prints a name using a given printing function.
 * @name: The name to be printed.
 * @f: A pointer to a function that takes a char pointer and returns void.
 *
 * Description: This function takes a name and a function pointer as arguments.
 *              If both name and funct pointer are valid (not NULL), it calls
 *              the specified function passing the name as an argument.
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
