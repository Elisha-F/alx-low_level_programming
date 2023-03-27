#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all its parameters
 * @n: constant int
 * Return: sum of parameters always, otherwise 0
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int sum = 0;
unsigned int i;
va_list ap;
va_start(ap, n);
if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
sum += va_arg(ap, int);
}
va_end(ap);
return (sum);
}
