#include "main.h"
/**
 * _strcpy - copies the string pointed to src
 *@dest: A pointer to a char that will be changed
 *@src: A pointer to a char that will be changed 
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{

int u;
u = 0;

while (src[u] != '\0')
{
dest[u] = src[u];
u++;
}
dest[u] = '\0';

return (dest);

}
		
