#include "lists.h"
/**
 * add_node_end - Write a function that adds a new node.
 * @head: head type pointer
 * @str: const char pointer
 * Return: The address of the new element, or NULL if it failed
 **/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
	list_t *last = *head;
	int count = 0;

	while (*(str + count) != '\0')
	{
		count++;
	}

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = count;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_node;
	}

	return (new_node);
}
