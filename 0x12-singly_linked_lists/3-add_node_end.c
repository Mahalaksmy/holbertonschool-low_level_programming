#include "lists.h"
/**
 * add_node_end - Write a function that adds a new node at the end of a list_t list.
 * @head: head type pointer
 * Return: The address of the new element, or NULL if it failed
 * 
 * */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *node;
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}

	node = (list_t *)malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}

}