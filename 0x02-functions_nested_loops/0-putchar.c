#include "main.h"
#include <unistd.h>i
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char word[9] = "Holberton";
int i;
for (i = 0; i < 9; i++)
_putchar(word[i]);
_putchar('\n');
return (0);
}
