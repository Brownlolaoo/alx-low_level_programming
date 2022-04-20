#include "main.h"
/**
 * _puts - print a string
 *@str: A pointer to an int that will be changed
 *
 * Return: void wich means our answer is correct
 */

void _puts(char *str)
{
char *c;
int p;

c = str;
for (p = 0; c[p]; p++)
{
_putchar (c[p]);
}
_putchar('\n');
}
