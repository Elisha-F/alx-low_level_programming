#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * cap_string - Capitalizes all words of a string
 * @str: pointer variable
 * Return: @str always
 */
char *cap_string(char *str)
{
int capitalize_next = 1;
unsigned long int i;
char *new_str = malloc(strlen(str) + 1);
if (new_str == NULL)
{
return (NULL);
}
for (i = 0; i < strlen(str); i++)
{
if (isspace(str[i]) || str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' ||
str[i] == ')' || str[i] == '{' || str[i] == '}')
{
new_str[i] = str[i];
capitalize_next = 1;
}
else if (capitalize_next)
{
new_str[i] = toupper(str[i]);
capitalize_next = 0;
}
else
{
new_str[i] = str[i];
}
new_str[strlen(str)] = '\0';
}
return (new_str);
}
