#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * @h: head node
 * Return: length of nodes
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
