#include "lists.h"

/**
 * sum_listint - returns the nth node of a
 * @head: head of list
 * Return: sum
 *
 */

int sum_listint(listint_t *head)
{
int sum = 0;

if (!head)
return (0);

while (head != NULL)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
