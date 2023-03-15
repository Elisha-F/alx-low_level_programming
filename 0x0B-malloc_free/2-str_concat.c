#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concantenates twos strings
 * @s1: string pointer 1
 * @s2: string pointer 2
 * Return: Null of failure, pointer of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
int len1 = strlen(s1);
int len2 = strlen(s2);
char *newstr = (char *) malloc((len1 + len2 + 1) * sizeof(char));
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
if (newstr == NULL)
{
return (NULL);
}
strcpy(newstr, s1);
strcat(newstr, s2);
return (newstr);
free(newstr);
}
