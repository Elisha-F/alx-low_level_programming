#include "main.h"
#include <string.h>
/**
 * _strpbrk - searches for a string for any set of bytes
 * @s: Pointer of char type
 * @accept: pointer of char type
 * Return: Pointer to the byte in s that matches one in accept
 */
char *_strpbrk(char *s, char *accept)
{
char *p;
p = strpbrk(s, accept);
return (p);
}
