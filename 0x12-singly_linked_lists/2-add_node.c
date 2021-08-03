#include "lists.h"
/**
 * add_node -  A function that adds a new node
 * @head: pointer to the head of the list.
 * @str: Variable
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int i = 0;

	node = (list_t *)malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	while (*(str + i) != '\0')
	{
		i++;
	}

	node->len = i;
	node->str = strdup(str);
	node->next = *head;
	*head = node;

	return (node);
}