#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of the list
 * @head: pointer to the beginning of the list
 * @n: the data in the node
 * Return: address of the new node else null
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node, *temp;

	end_node = malloc(sizeof(dlistint_t));
	if (end_node == NULL)
		return (NULL);
	end_node->prev = NULL;
	end_node->n = n;
	end_node->next = NULL;
	if (*head == NULL)
	{
		*head = end_node;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	end_node->prev = temp;
	temp->next = end_node;
	return (end_node);
}
