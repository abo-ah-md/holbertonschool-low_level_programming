#include <stdio.h>
#include "dog.h"
/**
*print_dog -  initialize a variable of type struct dog
*@d:struct dog
*/
void print_dog(struct dog *d)
{
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
