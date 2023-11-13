#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	current_node = *h;
	for (i = 0; i < idx - 1 && current_node != NULL; i++)
	{
		current_node = current_node->next;
	}

	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current_node->next;
	new_node->prev = current_node;
	if (current_node->next != NULL)
		current_node->next->prev = new_node;
	current_node->next = new_node;

	return (new_node);
}
