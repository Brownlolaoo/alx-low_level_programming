#include "main.h"
/**
 * _strlen - lenght of a string
 *@s: A pointer to an int that will be changed/updated
 * 
 * Return: void that means out answer is correct
 */
int _strlen(char *s)
{
int q;

q = 0;
while (s[q] != '\0')
{
q++;
}
return (q);
}
