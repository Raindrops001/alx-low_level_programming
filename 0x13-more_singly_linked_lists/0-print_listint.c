#include "lists.h"

/**
 * print_listint - This prints the entire elements of the linked list
 * @h: To print the linked list of type listint_t
 *
 *  Return: Nodes no.
 */
size_t print_listint(const listint_t *h)
{
size_t num = 0;

while (h)
{
	printf("%d\n", h->n);
	num++;
	h = h->next;
}

return (num);
}
