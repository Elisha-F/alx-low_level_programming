#include "main.h"
/**
 * wildcmp - compare two strings
 * @s1: pointer of char type
 * @s2: pointer of char type
 * Return: 1 if s1=s2, o otherwise
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s2 == '*')
{
if (wildcmp(s1, s2 + 1))
{
return (1);
}
if (*s1 != '\0' && wildcmp(s1 + 1, s2))
{
return (1);
}
}
if (*s1 != '\0' && *s2 != '\0')
{
if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
}
return (0);
}

