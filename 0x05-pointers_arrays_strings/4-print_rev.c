#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string variable
 * Return: Always 0
 */
void print_rev(char *s)
{
int k = 0;
while (s[k] != '\0')
{
k++;
}
for (k -= 1; k >= 0; k--)
{
_putchar(s[k]);
}
_putchar('\n');
}
