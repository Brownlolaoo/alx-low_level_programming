#include "main.h"
/**
 * _strpbrk - matches any character specified
 * @s: This the C string to be  scanned.
 * @accept:character in str1 that matches one of the characters in str2
 * Return: string s that matches any character specified in accept
 */
char *_strpbrk(char *s, char *accept)
{
int m;
while (*s != '\0') /*Declaring WHILE*/
{
m = 0;
while (accept[m] != '\0') /*Evaluating *accept*/
{
if (*s == accept[m])
{
return (s);
}
m++; /*add j+1*/
}
s++; /*add s+1*/
}
return (0);

}
