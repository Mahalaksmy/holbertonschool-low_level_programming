#include "lists.h"
/**
 * add_dnodeint_end - Function that adds a new nodea at the end.
 * @head: Pointer the double linked list.
 * @n:new element in the node
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *New_node, *New_elem = *head;

	New_node = malloc(sizeof(dlistint_t));

	if (New_node == NULL)
		return (NULL);

	New_node->n = n;
	New_node->next = NULL;

    if ((*head) == NULL)
	{
		New_node->prev = NULL;
		(*head) = New_node;
		return (New_node);
	}

	while (New_elem->next != NULL)
	{
		New_elem = New_elem->next;
	}
	New_elem->next = New_node;
	New_node->prev = New_elem;
	return (New_node);
}
