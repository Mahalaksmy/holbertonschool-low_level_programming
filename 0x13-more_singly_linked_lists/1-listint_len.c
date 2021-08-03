#include "lists.h"
/**
 * listint_len - Function that returns the number of elements in a linked list.
 * @h: head type pointer
 * Return: Result of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	listint_t *l_lists;

	l_lists = (listint_t *)h;

	while (l_lists != NULL)
	{
		i++;
		l_lists = l_lists->next;
	}
	return (i);
}
