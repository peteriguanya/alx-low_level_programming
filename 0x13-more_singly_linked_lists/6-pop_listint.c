#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function to remove node from top
 * @head: pointer to head node
 *
 * Return: always successful
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int j = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->j;
		free(*head);
		*head = new_head;
	}

	return (j);
}
