#include "main.h"
#include <string.h>
/**
 * _strstr - locates a substring
 * @haystack: Pointer of char type
 * @needle: pointer of char type
 * Return: a pointer to the beginning of the located substrings
 */
char *_strstr(char *haystack, char *needle)
{
char *ret;
ret = strstr(haystack, needle);
return (ret);
}
