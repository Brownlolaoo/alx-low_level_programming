#include "variadic_functions.h"
/**
 * print_strings - function that prints string
 * @separator: string to be printed
 * @n: number of string passed
 *
 * Return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int p;
char *str;
va_start(valist, n);
for (p = 0; p < n; p++)
{
str = va_arg(valist, char *);
if (str)
printf("%s", str);
else
printf("(nil)");
if (p < n - 1)
if (separator)
printf("%s", separator);
}
printf("\n");
va_end(valist);
}
