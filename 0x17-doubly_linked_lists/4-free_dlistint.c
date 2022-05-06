#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: the start of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head != NULL)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
