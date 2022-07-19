#include "lists.h"

/**
* insert_nodeint_at_index - insert
* @head: head
* @idx: index
* @n: int
*
* Return: address of node or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *l;

	l = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx && l != NULL; i++)
		{
			l = l->next;
		}
	}

	if (l == NULL && idx != 0)
		return (NULL);

	new = malloc(siezof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = l->next;
		l->next = new;
	}

	return (new);
}
