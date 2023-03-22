#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Puppy information
 * @name: Name of the puppy
 * @age: age of the puppy
 * @owner: the owner
 * Description: The struct highlights the information concerning the puppy
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*DOG_H*/
