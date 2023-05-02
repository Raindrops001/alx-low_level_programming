#include "lists.h"

/**
 * add_nodeint - This at the beginning of a linked list adds a new node
 * @head: This pointer, points to the first node in the list
 * @n: Insert data in the new node
 *
 * Return: NULL when it fails, OR Pointer to that new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}
