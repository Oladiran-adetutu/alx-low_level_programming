#include "lists.h"

/**
 * free_listint2 - frees list, head set to NULL
 * @head: head node
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *list;
	listint_t *tmp;

	if (head != NULL)
	{
		tmp = *head;
		while ((list = tmp) != NULL)
		{
			tmp = tmp->next;
			free(list);
		}
		*head = NULL;
	}
}
