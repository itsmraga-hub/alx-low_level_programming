#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_node_end - Adds a new node at end of list
* @head: pointer to head of linked list
* @str: string to add to the node
*
* Return: address of new list or NULL
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newllist, *tmp;

	if (str != NULL)
	{
		newllist = malloc(sizeof(list_t));

		if (newllist == NULL)
			return (NULL);

		newllist->str = strdup(str);
		newllist->len = _strlen(str);
		newllist->next = NULL;

		if (*head == NULL)
		{
			*head = newllist;
			return (*head);
		}
		else
		{
			tmp = *head;
			while (tmp->next)
				tmp = tmp->next;

			tmp->next = newllist;
			return (tmp);
		}
	}

	return (NULL);
}


/**
* _strlen - returns len of a string
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
