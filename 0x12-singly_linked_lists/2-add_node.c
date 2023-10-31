#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_note - adding a node to the beginning of a node
 * @head: double pointer to the head
 * @str: str name
 * Return: new address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(struct list_s));
	if (temp == NULL)

		return (NULL);

	temp->str = strdup(str);

	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = strlen(str);
	temp->next = NULL;

	temp->next = *head;

	*head = temp;

	return (*head);
}
