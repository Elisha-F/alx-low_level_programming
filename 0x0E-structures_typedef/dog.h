#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Puppy information
 * @name: Name of the puppy
 * @age: age of the puppy
 * @owner: the owner
 * Description: The struct highlights the information concerning the puppy
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*DOG_H*/
