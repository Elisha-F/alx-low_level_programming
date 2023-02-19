#include <stdio.h>
/**
 * main - Entry point for main
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int combo;
for (combo = '0'; combo <= '9'; combo++)
{
putchar(combo);
putchar(',');
putchar(' ');
}
 putchar('\n');
return (0);
}
