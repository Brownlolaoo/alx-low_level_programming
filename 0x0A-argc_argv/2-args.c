#include <stdio.h>
#include "main.h"
/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: Arguments
 *
 * Return: return 0 (succes)
 */
int main(int argc, char *argv[])
{
/*Declaring Variables*/
int count = 0;
if (argc > 0)
{
/*While - print each arguments*/
while (count < argc)
{
printf("%s\n",argv[count]);
count++;
}
}
return (0);
}
