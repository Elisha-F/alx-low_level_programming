#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array variable
 * @size: size of array
 * @cmp: pointer to function to compare value
 * Return: Index of array always, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || !(array) || !(cmp))
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}

