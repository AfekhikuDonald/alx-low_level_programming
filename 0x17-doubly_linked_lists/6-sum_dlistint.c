#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the elements in the list
 * @head: pointer to beginning of the list
 * Return: total sum of elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;
	while (head != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
