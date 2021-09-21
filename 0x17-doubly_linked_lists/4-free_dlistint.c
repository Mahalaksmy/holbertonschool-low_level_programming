#include "lists.h"
/**
 * free_dlistint - Function that free.
 * @head: Pointer the double linked list.
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *V_free = head;
	dlistint_t *elm;

	while (V_free != NULL)
	{
		elm = V_free->next;
		free(V_free);
		V_free = elm;
	}
}
