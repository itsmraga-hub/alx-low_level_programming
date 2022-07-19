#include "lists.h"

/**
* add_nodeint - Adds a new node at beginning
* @head: head
* @n: int
*
* Return: address of new element or NULL
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list;

	list = malloc(sizeof(listint_t));

	if (list == NULL)
		return (NULL);

	list->n = n;
	list->next = *head;
	*head = list;

	return (*head);
}
