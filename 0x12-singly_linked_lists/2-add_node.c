#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - add a new node at the beginning of list_t
 * @head: the linked list
 * @str: added string
 * Return: The adress of the new list and NULL if fail
 */
list_t *add_node(list_t **head, const char *str);
{
	list_t *a;

	if (head != NULL && str != NULL)
	{
		a = malloc(sizeof(list_t));
		if (a == NULL)
			return (NULL);

		a->str = strdup(str);
		a->len = _strlen(str);
		a->next = *head;

		*head = a;

		return (a);
	}

	return (0);
}

/**
 * _strlen - Entry point
 *@s: pointer the string we want to now length
 *
 * Return: 0
 */
int _strlen(char *s)
{
        int i;

        i = 0;
        while (*(s + i) != '\0')
        {
                i++;
        }
        return (i);
}
