#ifndef MAIN_H
#define MAIN_H
/**
*struct dog - a struct to basic dog info
*@name: string name of the dog
*@age: float age of dog
*@owner: string owner of the dog
*
*Description: Holds details about the dog
**/

struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
