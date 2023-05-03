#include "lists.h"

/**
 * sum_listint - This calculates the sum of the data in a listint_t list
 * @head: first node in the linked listed
 *
 * Return: the c resulting the sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

while (temp)
{
	sum += temp->n;
	temp = temp->next;
}

return (sum);
}
