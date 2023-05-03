#include "lists.h"

/**
 * sum_listint - returns smm of all data
 * @head: pointer to  first node
 *
 * Return: sum
 */
int sm_listint(listinr_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
