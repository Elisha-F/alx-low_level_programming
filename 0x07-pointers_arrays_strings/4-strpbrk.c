#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: Pointer of char type
 * @accept: pointer of char type
 * Return: No. of initial segment of s
 */
char *_strpbrk(char *s, char *accept)
{
char *p;
p = strbrk(s, accept);
return (p);
}
