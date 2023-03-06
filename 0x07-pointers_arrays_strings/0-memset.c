#include "main.h"
#include <strings.h>
/**
 * _memset - fills memory with a constant byte
 * @s: Pointer of char type
 * @b: varable b of char type
 * @n: int variable
 * Return: a ointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
