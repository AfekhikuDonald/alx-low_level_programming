#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of the list
 * @head: pointer to the head node
 * @n: data stored in node
 * Return: address of the new node else null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}
	tmp = *head;
	new_node->next = tmp;
	tmp->prev = new_node;
	*head = new_node;
	return (new_node);
}
