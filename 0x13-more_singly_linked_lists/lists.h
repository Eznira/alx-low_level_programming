#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif /* MAIN_H */
