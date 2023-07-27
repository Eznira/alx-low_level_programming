#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/**
 * struct list_s - Node object for the singly linked list
 * @str: string
 * @len: length of the string
 * @next: address of the next node
 *
 * Description: custom singly linked list structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif /* MAIN_H */
