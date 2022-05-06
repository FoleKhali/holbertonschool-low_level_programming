#include "lists.h"

/**
 * get_dnodeint_at_index - return a node to a linked list
 * @head: head
 * @index: index of the node
 * Return: head
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}
