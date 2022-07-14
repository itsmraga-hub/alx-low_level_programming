#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees memory allocated to linked list
* @head: pointer to first node
*
* Return: void
*/

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}

	free(head);
}
