#include "main.h"
/**
 * print _sign - prints the sign of a letter.
 * @c: the letter of which the sign will be printed.
 *
 * Return: 1 if the letter is greater than zero.
 *         0 if the letter is zero,
 *	   -1 if the number is less than zero.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('_');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-);
return (-1);
}
}
