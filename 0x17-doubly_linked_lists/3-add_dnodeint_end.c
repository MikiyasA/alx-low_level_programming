#include "lists.h"

/**
 * add_dnodeint_end - add new node
 * at the end of list
 * @head: dead of the list
 * @n: new data
 * Return:he address of the new element
 * or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *last;
new = malloc(sizeof(dlistint_t));
last = *head;

if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (*head);
}
while (last->next != NULL)
last = last->next;

last->next = new;
new->prev = last;

return (*head);
}
