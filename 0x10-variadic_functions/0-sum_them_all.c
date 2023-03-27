#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums all its parameters
 * @n: constant int
 * Return: sum of parameters always, otherwise 0
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
int i;
va_list ap;
va_start(ap, n);
for (i = n; i >= 0; i = var_arg(ap, unsigned int))
{
if (n == 0)
{
return (0);
}
sum += i;
return (sum);
}
}
