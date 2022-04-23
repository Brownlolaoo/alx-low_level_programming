#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@n: value
 *@src: A pointer to a character that will be changed
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, u;

i = 0;
while (dest[i] != '\0')
{
i++;
}

u = 0;
while (j < n && src[u] != '\0')
{
dest[i] = src[j];
u++;
i++;
}

dest[i] = '\0';

return (dest);
}

