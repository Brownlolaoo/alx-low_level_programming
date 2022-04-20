#include "main.h"
/**
 * puts2 - print every other character of a string
 *@str: A pointer to an int that will be changed
 *
 * Return: void which means our answer is correct
 */
void puts2(char *str)
{
int d;

for (d = 0; str[d] != '\0' ; d++)
{
if (d % 2 == 0)
_putchar (str[d]);
}

_putchar ('\n');
}
