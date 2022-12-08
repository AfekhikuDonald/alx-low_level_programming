#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to beginning of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head, *current;

	current = temp;
	while (temp != NULL)
	{
		current = temp->next;
		free(temp);
		temp = current;
	}
	head = NULL;
}
