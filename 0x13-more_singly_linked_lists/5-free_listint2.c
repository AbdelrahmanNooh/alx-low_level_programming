#include "lists.h"

/**
 * free_listint2 - Entry point
 *
 * @head: address of pointer to first node
 *
 * return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *teap;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		teap = node;
		node = node->next;
		free(t);
	}
	*head = NULL;
}
