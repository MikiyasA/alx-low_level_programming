#include "lists.h"

/**
 * add_nodeint - add note at the beginning
 * @head: head of the node
 * @n: data of the node
 * Return: head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));

new->n = n;
new->next = *head;
*head = new;

return (*head);
}
