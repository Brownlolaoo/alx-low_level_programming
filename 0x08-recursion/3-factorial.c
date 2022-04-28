#include "main.h"
/**
 * factorial - Returns the factorial of a given number
 * @n: pointer block of a memory to fill
 * Return: factorial
 */
int factorial(char *n)
{
if (n == 0) /*Base condition*/
return (1);
else if (n < 0) /*Base condition*/
return (-1);
else
return (n * factorial(n - 1)); /*Recursive call*/
}
