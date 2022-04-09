#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("last digit of %d is %d %s\n", n, n % 10,
:((n% 10) == 0) ? "and is 0"
:(((n  % 10) > 5) ? "and is greater than 5"
: "and is less than 6 and not 0"));

return (0);
}
