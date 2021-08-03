#include "lists.h"
/**
 * free_listint - Function that frees a listint_t list.
 * @head: head type pointer
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *f_list;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		f_list = head;
		head = head->next;
		free(f_list);
	}
}
