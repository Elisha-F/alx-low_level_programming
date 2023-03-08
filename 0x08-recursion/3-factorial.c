#include "main.h"
/**
 * factorial - returns factorial of a number
 * @n: int variable n
 * Return: -1 if n<0, factorial of n if n >= 0
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
