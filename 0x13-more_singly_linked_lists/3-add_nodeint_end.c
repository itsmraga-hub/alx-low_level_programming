#include "lists.h"

/**
* add_nodeint_end - Adds a new element at the end
* @head: head
* @n: int
*
* Return: address of new element or NULL
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *llist;
	listint_t *tmp;

	(void)tmp;

	llist = malloc(sizeof(listint_t));

	if (llist == NULL)
		return (NULL);

	llist->n = n;
	lliat->next = NULL;
	tmp = *head;

	if (*head == NULL)
	{
		*head == llist;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;

		tmp->next = llist;
	}

	return (*head);
}
