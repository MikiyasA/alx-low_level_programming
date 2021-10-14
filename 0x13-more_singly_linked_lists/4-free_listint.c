#include "lists.h"

/**
 * free_listint - free the listint_t
 * @head: head of list
 * Return: NA
 *
 */

void free_listint(listint_t *head)
{
listint_t *current;
while ((current = head) != NULL)
{
head = head->next;
free(current);

}
}
