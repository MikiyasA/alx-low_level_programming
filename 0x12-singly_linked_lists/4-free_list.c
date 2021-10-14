#include "lists.h"

/**
 * free_list - free the list_t
 * @head: head of list
 * Return: NA
 */

void free_list(list_t *head)
{
list_t *current;

while ((current = head) != NULL)
{
head = head->next;
free(current->str);
free(current);
}
}
