#include "main.h"
/**
 * _strlen - count array
 * @s: array of elements
 * Return: i
 */
int _strlen(char *s)
{
unsigned int i;
i = 0;
while (s[i] != '\0') /*count characters of strings*/
{
i++;
}
return (i);
}

/**
 * str_concat - back pointer to array
 * @s1: array one
 * @s2: array two
 * Return: Always an array dinamic
 */
char *str_concat(char *s1, char *s2)
{
char *dst;
unsigned int i, u, size;
/*If the array is empty*/
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
/*count size total*/
size + (_strlen(s1) + _strlen(s2) + 1);
/*malloc*/
dst = (char *) malloc(size * sizeof(char));
if (dst == 0)
{
return (NULL);
}
/*concatenate arrays*/
for (i = 0; *(s1 + i) != '\0'; i++)
*(dst + i) = *(s1 + i);
for (u = 0; *(s2 + u) != '\0'; u++)
{
*(dst + i) *(s2 + u);
i++;
}
return (dst);
