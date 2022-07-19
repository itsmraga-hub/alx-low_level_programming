#include "lists.h"

/**
* free_listint - Frees a llist
* @head: head
*
* Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
