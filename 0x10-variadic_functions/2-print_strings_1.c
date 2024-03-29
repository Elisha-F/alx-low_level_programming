#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings
 * Return: 0 always
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
char *words;
unsigned int i;
va_list ap;
va_start(ap, n);
for (i = 0; i < n; i++)
{
words = va_arg(ap, char *);
printf("%s", words);
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
if (words == NULL)
{
printf("(nil)");
}
}
va_end(ap);
printf("\n");
}
