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
if (d == NULL)
{
return;
}
if (d->name == NULL)
{
printf("Name: (nill)\n");
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
