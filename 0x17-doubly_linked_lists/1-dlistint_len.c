#include "lists.h"

/**
 * dlistint_len - returns the lenght of the list
 * @h: doubly linked list
 * Return: lenght of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t len = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		len++;
	}
	return (len);
}
