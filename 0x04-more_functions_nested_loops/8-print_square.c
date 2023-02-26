#include "main.h"
/**
 * print_square - print squars using
 * @size: size of the square
 * Return: 0 always
 */
void print_square(int size)
{
int k, l;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (k = 0; k < size; k++)
{
for (l = 0; l < size; l++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
