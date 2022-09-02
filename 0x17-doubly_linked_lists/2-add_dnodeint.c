#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning
*
* @head: head
* @n: value
* Return: address of new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n;
	dlistint_t *h;

	n = malloc(sizeof(dlistint_t));
	if (n == NULL)
		return (NULL);

	n->n = n;
	n->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	n->next = h;

	if (h != NULL)
		h->prev = n;

	*head = n;

	return (n);
}
