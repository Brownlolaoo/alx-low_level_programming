#include "main.h"
/**
 * int binary_to_uint - function that converts a binary to a number
 * @b: pointing to a string 0 and 1 char
 *
 * Return: the converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
int p;
unsigned int num;
num = 0;
if (!b)
return (0);
for (p = 0; b[i] != '\0'; p++)
{
if (b[p] != '0' && b[p] != '1')
return (0);
}
for (p = 0; b[p] != '\0'; p++)
{
num <<= 1;
if (b[p] == '1')
num += 1;
}
return (num);
}
