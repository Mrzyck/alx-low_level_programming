#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: pointer to head
 * @str: string to be added
 * Return: the address of the new pointer or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node = *head;
	int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len];)
	{
		len++;
	}

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}

	return (*head);
}
