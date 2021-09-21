#include "lists.h"
/**
 * add_dnodeint - Function that adds a new node.
 * @head: Pointer the double linked list.
 * @n: number new element in the node
 * Return: The address of the new element, or NULL if it failed.
 */
 dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *New_node;

	New_node = malloc(sizeof(dlistint_t));

	if (New_node == NULL)
			return (NULL);

	New_node->n = n;
	New_node->prev = NULL;
	New_node->next = *head;

	if (*head != NULL)
			(*head)->prev = New_node;
	
	*head =New_node;
	return (New_node);
}
