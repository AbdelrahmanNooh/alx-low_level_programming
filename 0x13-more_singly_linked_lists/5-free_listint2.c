#include "lists.h"

/**
 * free_listint2 - frees a list of ints
 * @head: address of pointer to first node
 *
 * Return: void
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
		free(teap);
	}
	*head = NULL;
}
