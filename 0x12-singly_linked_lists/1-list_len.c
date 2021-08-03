#include "lists.h"
/**
 * list_len - function principal
 * @h: Variable
 * Return: the number of elements of the list
 */
size_t list_len(const list_t *h)
{
	size_t i;
	list_t *list;

	list = (list_t *)h;

	for (i = 0; list != NULL; i++)
	{
		list = list->next;
	}
	return (i);
}
