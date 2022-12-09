#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the elements in the list
 * @head: pointer to beginning of the list
 * Return: total sum of elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
