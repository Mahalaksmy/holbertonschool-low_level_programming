#include "lists.h"
/**
 * delete_dnodeint_at_index - Function that deletes the node at index of a DLL.
 * @head: Pointer of the double linked list.
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *V_delete = (*head);
	unsigned int x;

	if (*head == NULL || head == NULL)
		return (-1);

	for (x = 0; V_delete  != NULL; x++)
	{
		if (x == index)
		{
			if (V_delete->prev)
				V_delete->prev->next = V_delete ->next;
			if (V_delete->next)
				V_delete->next->prev = V_delete ->prev;
			if (*head == V_delete )
				(*head) = V_delete->next;
			free(V_delete);
			return (1);
		}
		V_delete  = V_delete->next;
	}
	return (-1);
}
