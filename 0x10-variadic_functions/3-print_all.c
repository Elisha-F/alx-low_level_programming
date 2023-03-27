#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: constant variable
 * Return: 0 alaways
 */
void print_all(const char * const format, ...)
{
va_list args;
char c;
int i;
float f;
char *s;
int num_args = 0;
va_start(args, format);
while ((c = format[num_args]) != '\0')
{
switch (c)
{
case 'c':
i = va_arg(args, int);
printf("%c", i);
break;
case 'i':
i = va_arg(args, int);
printf("%d", i);
break;
case 'f':
f = va_arg(args, double);
printf("%f", f);
break;
case 's':
s = va_arg(args, char*);
if (s == NULL)
{
printf("(nil)");
}
else
{
printf("%s", s);
}
break;
}
if (format[num_args + 1] != '\0')
{
printf(", ");
}
num_args++;
}
printf("\n");
va_end(args);
}

