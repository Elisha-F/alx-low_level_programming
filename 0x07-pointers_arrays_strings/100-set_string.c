#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void set_string(char **s, char *to)
{
if (*s != NULL)
{
free(*s);
*s = NULL;
}
*s = (char*) malloc(strlen(to) + 1);
strcpy(*s, to);
}
