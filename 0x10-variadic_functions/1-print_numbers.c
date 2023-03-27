#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers followed by new line
 * @separator: string printed between numbers
 * @n: number of integers passed to function
 * Return: numbers always, otherwise 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int num;
va_list ap;
va_start(ap, n);
for (i = 0; i < n; i++)
{
num = va_arg(ap, int);
printf("%d", num);
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(ap);
printf("\n");
}
