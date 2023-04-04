#include "lists.h"

/**
 * pop_listint - Deletes head node of list
 * @head: head of linked list
 * Return: nothing
 */

int pop_listint(listint_t **head)
{
	int headnode;
	listint_t *tmp;
	listint_t *list;

	if (*head == NULL)
		return (0);
	list = *head;

	headnode = list->n;

	tmp = list->next;

	free(list);

	*head = tmp;

	return (headnode);
}


