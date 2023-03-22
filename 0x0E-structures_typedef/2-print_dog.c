#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints struct dog
 * @d: pointer of type struct dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
char *name;
float age;
char *owner;
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
if (d->name == NULL)
{
printf("Name: (nill)\n");
}
if (d->age == NULL)
{
printf("Age: (nill)\n");
}
if (d->owner == NULL)
{
printf("Owner: (nill)\n");
}
else
{
printf("Name: %s\n", d->name);
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
