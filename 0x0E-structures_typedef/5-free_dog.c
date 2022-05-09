#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free memory
 * @d: array
 * Descriptio: free memory for struct
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
