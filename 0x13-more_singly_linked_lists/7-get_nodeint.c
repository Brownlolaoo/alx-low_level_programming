#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linkint_t in a linked list
 * @head: first node the linked lists
 * @index: index of the node to return
 *
 * Return: pointer to the node we are looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int r = 0;
listint_t *temp = head;
while (temp && r < index)
{
temp = temp->next;
r++;
}
return (temp ? temp : NULL);
}
