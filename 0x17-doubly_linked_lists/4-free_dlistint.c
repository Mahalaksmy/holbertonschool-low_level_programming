#include "lists.h"
/**
 * free_dlistint - Function that free.
 * @head: Pointer the double linked list.
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *Vfree = head;

	if (Vfree != NULL)
	{
		Vfree = head;
		head = head->next;
		free(Vfree);
	}
}
