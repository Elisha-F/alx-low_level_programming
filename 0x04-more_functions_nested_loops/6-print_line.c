#include "main.h"
/**
 * print_line - print a line on the terminal
 * @n: number of times _ appears on the terminal
 * Return: Number of _ n
 */

void print_line(int n)
{
int i;
for (i = 0; i <= n; i++)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
_putchar('_');
}
}
_putchar('\n');
}
