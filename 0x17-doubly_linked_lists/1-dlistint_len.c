#include "lists.h"

/**
 * dlistint_len - return the number of times it count
 * @h: head
 * Return: counter.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;

	for (counter = 0; h != NULL; counter++)
	{
		h = h->next;
	}

	return (counter);
}
