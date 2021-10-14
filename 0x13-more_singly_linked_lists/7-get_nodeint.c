#include "lists.h"
#include <assert.h>
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: head of the link
 * @index: index of list
 * Return: head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int c;

for (c = 0; c < index && head != NULL; c++)
{
head = head->next;
}
return (head);
}
