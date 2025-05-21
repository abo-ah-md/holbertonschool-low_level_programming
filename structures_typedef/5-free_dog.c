#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*d-   frees dogs struct
*free_dog
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
