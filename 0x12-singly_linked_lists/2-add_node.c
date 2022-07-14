#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - Adds a new node at beginning of a list_t list
* @head: head
* @str: string to add to node
*
* Return: address of new element or NULL
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	if (head != NULL && str != NULL)
	{
		tmp = malloc(sizeof(list_t));
		if (tmp == NULL)
			return (NULL);

		tmp->str = strdup(str);
		tmp->len = _strlen(str);
		tmp->next = *head;

		*head = tmp;

		return (tmp);
	}

	return (0);
}

/**
* _strlen - returns the length of a string
* @s: string
*
* Return: len
*/

int _strlen(const char *s)
{
	int len = 0;

	while (*s)
	{
		s++;
		len++;
	}

	return (len);
}
