#include "lists.h"


/**
 * reverse_listint - referse lists
 * @head: head of lists
 * Return: head
 *
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev, *current, *next;

prev = NULL;
current = *head;
next = NULL;

while (current != NULL)
{
next = current->next;
current->next = prev;

prev = current;
current = next;
}
*head = prev;
return (*head);
}
