#include "main.h"
/**
 * puts_half - prints every other character of a string
 *@str: A pointet to an int that will be changed
 *
 * Return: void which means our answer is correct
 */
void puts_half(char *str)
{
int y, last;

y = 0;
while(str[y] != '\0')
{
y++;
}

last = (y + 1) / 2;

for (y = last; str[y]; y++)
{
_putchar (str[y]);
}

_putchar ('\n');

}
