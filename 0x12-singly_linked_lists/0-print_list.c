#include <stdio.h>
#include "list.h"
/**
 * print_list - prints all the elements
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
size_t nel;
nel = 0;
while (p != NULL)
{
if (p->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
p = p->next;
nel++;
}
return (nel);
}
