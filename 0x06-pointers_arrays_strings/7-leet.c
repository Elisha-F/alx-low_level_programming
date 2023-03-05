#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: pointer variable of type char
 * Return: encoded string
 */
char *leet(char *str)
{
char *result = str;
char *leet_chars = "4 3 0 7 1";
char *normal_chars = "aeotlAEOTL";
int i, j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; normal_chars[j] != '\0'; j++)
{
if (str[i] == normal_chars[j])
{
result[i] = leet_chars[j / 2];
break;
}
}
}
return (result);
}

