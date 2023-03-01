#include "main.h"
#include <string.h>
/**
 * puts_half - prints half ofa string
 * @str: variable character
 * Return:  0 Always
 */
void puts_half(char *str)
{
int i;
int len = strlen(str);
int start = len % 2 == 0 ? len / 2 : (len - 1) / 2 + 1;
for (i = start; i < len ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
