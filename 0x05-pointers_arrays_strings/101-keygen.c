#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random pass for task 101-crackme
 * Return: zero
 */
int main(void)
{
int sum;
char c;

srand(time(0));
while (sum <= 2645)
{
c = rand() % 128;
sum += c;
putchar(c);
}
putchar(2772 - sum);
return (0);
}
