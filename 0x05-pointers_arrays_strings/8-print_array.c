#include <stdio.h>
#include "main.h"
/**
 * print_array - print elements of an array
 * @a: variable int
 * @n: variable int
 * Return: 0 always
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}
