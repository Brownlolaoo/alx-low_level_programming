#include "main.h"
/**
 * prints_numbers - print number
 * Return: Always 0.
 */
void print_numbers(void)
{
int i;

i = 0;
while (i < 10)
{
_putchar (i + '0');
i++;
}

_putchar ('\n');
}