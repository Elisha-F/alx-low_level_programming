#include "main.h"
#include <strings.h>
/**
 * _memcpy - copies memory area
 * @dest: destination Pointer of char type
 * @src: source pointer of char type
 * @n: int variable
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
