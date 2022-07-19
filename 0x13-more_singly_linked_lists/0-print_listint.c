#include "lists.h"

/**
* print_listint - Prints all elements in a linked list
* @h: head
*
* Return: len or number of all nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
