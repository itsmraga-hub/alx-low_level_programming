#include "lists.h"

/**
* pop_listint - deletes head of a llist
* @head: head
*
* Return: head
*/

int pop_listint(listint_t **head)
{
	int h;
	listint_t *hlist;
	listint_t *i;

	if (*head == NULL)
		return (0);

	i = *head;

	h = i->n;
	hlist = i->next;

	free(i);

	*head = hlist;

	return (h);
}
