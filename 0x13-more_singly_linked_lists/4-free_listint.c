#include "lists.h"

/**
 * free_listint - frees list
 * @head: struct head
 *Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	while ((list = head) != NULL)
	{
		head = head->next;
		free(list);
	}
}
