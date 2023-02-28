#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first pointer
 * @b: second pointer
 * Return: 0 Always
 */
void swap_int (int *a, int *b)
{
int j;
j = *a;
*a = *b;
*b = j;
}
