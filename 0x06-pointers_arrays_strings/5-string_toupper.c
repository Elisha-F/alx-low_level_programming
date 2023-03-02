#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * string_toupper - changes lower case to upper case
 * @str: char pointer
 * Return: Uppercase
 */
char *string_toupper(char *str)
{
unsigned long int i;
for (i = 0; i < strlen(str); i++)
{
if (islower(str[i]))
{
str[i] = toupper(str[i]);
}
}
return (str);
}
