#include "lists.h"
/**
 *add_nodeint - Function that adds a new node at the beginning of a linked list
 *@head: head type pointer
 *@n: Variable Type integer constante
 *Return: Result of node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;

	*head = node;

	return (node);
}
