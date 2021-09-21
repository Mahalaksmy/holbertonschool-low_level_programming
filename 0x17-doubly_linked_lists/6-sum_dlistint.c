#include "lists.h"
/**
 * sum_dlistint - Function that returns a sum
 * @head: Pointer the double linked list.
 * Return: The sum of all numbers.
 */
int sum_dlistint(dlistint_t *head)
{
	int add;
	dlistint_t *V_add;

	add = 0;
	V_add = head;

	while (V_add)
	{
		add += V_add->n;
		V_add = V_add->next;
	}

	return (add);
}
