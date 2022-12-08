#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: pointer to the beginning of the list
 * @index: index
 * Return: address of the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int point = 0;

	temp = head;
	if (head == NULL)
		return (NULL);
	while (temp != NULL)
	{
		temp = temp->next;
		point += 1;
		if (point == index)
		{
			return (temp);
		}
	}
	return (NULL);
}
