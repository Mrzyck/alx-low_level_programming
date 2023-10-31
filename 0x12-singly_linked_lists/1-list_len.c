#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * list_len - node list of length
 * @h: pointer to head
 * Return: the length of node
 */

size_t list_len(const list_t *h)
{
	size_t addup = 0;

	while (h != NULL)
	{
		addup++;
		h = h->next;
	}
	return (addup);
}
