#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints the elements in a doubly linked list
 * @h: doubly linked list
 * @Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t size = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		size++;
	}
	return (size);
}
