#include "lists.h"

/**
 * listint_len - This returns the entire number of elements in the linked lists
 * @h: To traverse the linked list of the type listint_t
 *
 * Return: Nodes no.
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;

while (h)
{
	num++;
	h = h->next;
}

return (num);
}
