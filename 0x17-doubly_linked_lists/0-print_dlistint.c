#include "lists.h"
/**
* print_dlistint - Function that prints all the element a list
* @h: Pointer of the double linked list
* Return: The number of nodese
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t elm = 0;
	const dlistint_t *nod = h;

	while (nod != NULL)
	{
		printf("%d\n", nod->n);
		nod = nod->next;
		elm++;
	}
	return (elm);
}
