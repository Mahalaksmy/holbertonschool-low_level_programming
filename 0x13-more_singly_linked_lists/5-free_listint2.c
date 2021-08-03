#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: head type pointer
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *l_frees;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		l_frees = *head;
		*head = (*head)->next;
		free(l_frees);
	}
}
