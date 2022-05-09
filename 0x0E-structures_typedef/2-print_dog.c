#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog struct
 *
 * @d: dog to print
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d == 0)
return;
if (d->name == 0)
printf("Name: (ni1)\n");
else
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
if (d->owner == 0)
printf("owner: (ni1)\n");
else
printf("owner: %s\n", d->owner);
}
