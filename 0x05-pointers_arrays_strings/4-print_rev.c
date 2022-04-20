#include "main.h"
/**
 * print_rev - prints a string in reverse order
 *@s: A pointer to an int that will be changed
 *
 * Return: void wich means our answer is correct
 */
void print_rev(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
for (u = u - 1 ; u >= 0; u--)
{
_putchar (s[u]);
}
_putchar ('\n');
}
