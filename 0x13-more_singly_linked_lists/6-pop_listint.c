#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a listint_t linked list.
 * @head: Head type pointer.
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *h_node;
	int x_node;


	if (*head == NULL)
	{
		return (0);
	}

	x_node = (*head)->n;
	h_node = *head;
	*head = (*head)->next;
	free(h_node);
	return (x_node);
}