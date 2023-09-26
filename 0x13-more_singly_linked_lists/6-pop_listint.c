#include "lists.h"

/**
 * pop_listint -  function that deletes the head node
 * @head: pointer
 * Return: the data or 0
 */


int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int count;

	if (!head || !*head)
		return (0);
	count = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (count);
}
