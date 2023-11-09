#include "lists.h"
/**
  * dlistint_len - function that returns number of elements
  * @h: pointer to the head
  *
  * Return: number of elements
  */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
