#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes with specific char
 * @size: int variable
 * @c: char variable
 * Return: NULL if size = 0, pointer to array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *_array;
_array = (char *) malloc(sizeof(char) * size);
if (size == 0)
{
return (NULL);
}
if (_array == NULL)
{
return (NULL);
}
for (i = 0; i <= size; i++)
{
_array[i] = c;
}
return (_array);
}
