#include <time.h>
#include <stdio.h>
/**
 */
int main(void)
{
int num;

strand(time(0));
num = rand();
printf("%i\n", num);
return (0);
}
