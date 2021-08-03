#include "lists.h"
/**
 * free_list - A function that frees a list_t list.
 * @head: head type pointer
 * Return: 0
 */
void free_list(list_t *head)
{
	if (!head)
	{
		return;
	}
	if (head->next)
	{
		free_list(head->next);
	}

	free(head->str);
	free(head);
}
