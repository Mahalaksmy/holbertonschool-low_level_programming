#include "lists.h"
/**
* dlistint_len - Function that returns the numbers of elements
* @h: Pointer of the double linked list
* Return: The number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t elm = 0;
	const dlistint_t *nod = h;

	while (nod)
	{
		nod = nod->next;
		elm++;
	}
	return (elm);
}
