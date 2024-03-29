#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function
 * @array: array pointer
 * @size: variable of size_t
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
