#include "lists.h"

/**
 * free_listint_safe - a function that frees a list
 * @h: Double pointer to the head of the list
 * Return: the size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int in_btwn;
	listint_t *current;

	if (!h || !*h)
	{
		return (0);
	}

	while (*h)
	{
		in_btwn = *h - (*h)->next;
		if (in_btwn > 0)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
