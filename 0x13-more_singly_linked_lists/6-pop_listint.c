#include "lists.h"

/**
 * pop_listint - this deletes the head node of linked list
 * @head: the pointer to the first element in linked list
 *
 * Return: data inside the elements that was deleted,
 * or if the list is empty 0
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (!head || !*head)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (num);
}
