#include "main.h"
/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
int main(int argc, char *argv[])
{
unsigned long mul;
int i, u;
if (argc != 3)
{ printf("Error\n");
exit(98); }
for (i = 1; i < argc; i++)
{
	for (u = 0; argv[i][u] != '\0'; u++)
{
	if (argv[i][u] > 57 || argv[i][u] < 48)
	{  printf("Error\n");
        exit(98); }
}
}
mul = atol(argv[1]) *atol(argv[2]);
printf("%lu\n", mul);
return (0);
}
