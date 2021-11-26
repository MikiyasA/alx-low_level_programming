#include "lists.h"

/**
 * sum_dlistint - return sum of all list
 * @head: head of list
 * Return: sum of all list
 */

int sum_dlistint(dlistint_t *head)
{
int c = 0, sum = 0;

if (head == NULL)
return (0);

while (head != NULL)
{
sum = sum + head->n;
c++;
head = head->next;
}
return (sum);
}
