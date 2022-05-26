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
unsigned int dec_val = 0;
if (!b)
return (0);
for (p = 0; b[p]; p++)
{
if (b[p] < '0' || b[p] > '1')
return (0);
dec_val = 2 * dec_val + (b[p] - '0');
}
return (dec_val);
}
