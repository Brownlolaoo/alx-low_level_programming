#include "main.h"
#include <stdio.h>
/**
 * main - print first 50 fibonacci numbers, starting with 1 and 2 with a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int count;
unsigned long fib1 = 0, fib2 = 1, sum;

for (count = 0; count < 50; count++)
{
sum = fib1 + fib2;
printf("%lu", sum);

fib1 = fib2;
fib2 = sum;

if (count == 49)
{
printf(",");
}
i++;
}
_putchar('\n');
return (0);
}
