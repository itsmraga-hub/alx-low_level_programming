#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
* list_len - Show the number of elements in a list
* @h: linked list
*
* Return: number of elements
*/

size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}

	return (c);
}
