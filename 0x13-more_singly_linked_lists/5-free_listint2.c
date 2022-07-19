#include "lists.h"

/**
* free_listint2 - Frees a linked list.
* @head: head
*
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *i;

	if (head != NULL)
	{
		i = *head;
		while ((tmp = i) != NULL)
		{
			i = i->next;
			free(tmp);
		}

		*head = NULL;
	}
}
