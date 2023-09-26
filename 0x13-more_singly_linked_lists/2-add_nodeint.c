#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning
 * @head: pointer
 * @h: the integer value to be stored
 * Return: pointer or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
