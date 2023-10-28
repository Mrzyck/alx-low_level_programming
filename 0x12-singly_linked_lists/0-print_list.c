#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - a function that prints list
 * @h: pointer to the struct member
 * Return: number of node available
 */

size_t print_list(const list_t *h)
{
	size_t digit = 0;

	while (h != NULL)
	{
		digit++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (digit);
}
