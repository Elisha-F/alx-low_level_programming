#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly created space memory
 * @str: pointer variable
 * Return: Null if str is NULL,NULL if no memory
 */
char *_strdup(char *str)
{
int len = strlen(str);
char *newstr = (char *)malloc((len + 1) * sizeof(char));
if (str == NULL)
{
return (NULL);
}
if (newstr == NULL)
{
return (NULL);
}
newstr = strdup(str);
return (newstr);
free(newstr);
}
