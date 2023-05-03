#include "lists.h"

/**
 * free_listint - This frees a linked list
 * @head: The listint_t list that is to be freed
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
