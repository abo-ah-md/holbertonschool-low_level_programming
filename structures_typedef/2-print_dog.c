#include <stdio.h>
#include "dog.h"
/**
*print_dog -  initialize a variable of type struct dog
*@d:struct dog
*/
void print_dog(struct dog *d)
{
*char agefail = "(nil)";
if(d == NULL)
retrun;

if(d->name == NULL)
d->name = "(nil)";

if(d->owner == NULL)
d->owner = "(nil)";


if(d->age == NULL)
{
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, agefail, d->owner);
return;
}

printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
