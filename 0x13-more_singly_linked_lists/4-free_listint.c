/*
 * File: 4-free_listint.c
 * Auth: Mohamed Ahmed
 */

#include "lists.h"

/**
 * free_listint-frees linked list
 * @head: listint_t list freed
 */



void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
