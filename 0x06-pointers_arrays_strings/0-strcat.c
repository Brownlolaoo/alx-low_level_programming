#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will be changed
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
int i, u;

i = 0;
while (dest[i] != '\0')
{
i++;
}

u = 0;
while (src[u] != '\0')
{
dest[i] = src[u];
u++;
i++;
}
dest[i] = '\0';

return (dest);
}
