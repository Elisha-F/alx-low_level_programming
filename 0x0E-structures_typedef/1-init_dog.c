#include <stdlib.h>
/**
 * init_dog - initializes a variable of type struct dog
 * @d: struct dog type
 * @name: variable name
 * @age: variable age
 * @owner: variable owner
 * Return: struct dog type varibale
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = malloc(sizeof(struct dog));
if (d == NULL)
{
return (NULL);
}
d->name = name;
d->age = age;
d->owner = owner;
return (d);
}
