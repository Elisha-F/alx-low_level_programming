#include "main.h"
/**
 * puts2 - prints every other character of astring
 * @str: variable of type char
 * Return: 0 Always
 */
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i +=2)
{
_putchar(str[i]);
}
_putchar('\n');
}
