#include "lists.h"
/**
 * print_listint - Function that prints all the elements of a listint_t list.
 * @h: Variable head type pointer
 * Return:  the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	listint_t *num_nodes;

	num_nodes = (listint_t *)h;

	while (num_nodes != NULL)
	{
		printf("%i\n", num_nodes->n);
		num_nodes = num_nodes->next;
		i++;
	}
	return (i);
}