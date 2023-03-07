#include "main_h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagnals of square matrix of integers
 * @a: pointer a
 * @size: variable size of int type
 * Return: Sum of diagonals of two square matrice
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;
for (int i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + size - 1 - i];
}
printf("%d\n", sum1);
printf("%d\n", sum2);
}
