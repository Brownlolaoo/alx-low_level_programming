#include "lists.h"
/**
 * sum_listint - functions that return the sum of all the data in a linked list
 * @head: first node in the linked list
 *
 * Return: if empty return 0
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
