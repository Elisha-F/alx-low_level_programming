#include "main.h"
#include <string.h>
/**
 * _strchr - locates a character in a string
 * @s: Pointer of char type
 * @c: variable c of char type
 * Return: a pointer to th first occurrence of char c in string s
 */
char *_strchr(char *s, char c)
{
char *p;
p = strchr(s, c);
return (p);
}
