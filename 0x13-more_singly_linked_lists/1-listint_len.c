#include "lists.h"

/**
* listint_len - finds number of elements in a linked list
* @h: head
*
* Return: num or len
*/

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
