#include <stdio.h>
/**
 * main - Entry point for main
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;
char hex;
for (number = '0'; number <= '9'; number++)
{
putchar(number);
}
for (hex = 'a'; hex <= 'f'; hex++)
{
putchar(hex);
}
putchar('\n');
return (0);
}
