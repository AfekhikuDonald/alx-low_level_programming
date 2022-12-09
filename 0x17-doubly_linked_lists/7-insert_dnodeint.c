#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at the given index
 * @h: address of the first node
 * @idx: index
 * @n: data in the node
 * Return: address of the node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));

	if (*h == NULL || new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	while (temp)
	{
		if (temp->next == NULL && count == idx - 1)
		{
			new_node = add_dnodeint_end(h, n);
			return (new_node);
		}
		else if ((idx - 1) == count)
		{
			new_node->next = temp->next;
			new_node->prev = temp;
			temp->next->prev = new_node;
			temp->next = new_node;
			return (new_node);
		}
		count++;
		temp = temp->next;
	}
	free(new_node);
	return (NULL);
}

