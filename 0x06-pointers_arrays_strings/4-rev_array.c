#include "main.h"
/**
 * reverse_array - reverses the contents of an array
 * @a: int variable pointer
 * @n: number of elements in an array
 * Return: 0 Always
 */
void reverse_array(int *a, int n)
{
int i;
for (i = 0; i < n / 2; i++)
{
int temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
