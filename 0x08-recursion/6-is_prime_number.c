#include "main.h"
/**
 * is_prime_number_helper - check if a number is prime
 * @n: int variable n
 * @i: int variable i
 * Return: 1 if integer is prime, 0 otherwise
 */
int is_prime_number_helper(int n, int i)
{
if (i * i > n)
{
return (1);
}
else if (n % i == 0)
{
return (0);
}
else
{
return (is_prime_number_helper(n, i + 1));
}
}

/**
 * is_prime_number - checks for prime number
 * @n: int variable n
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (is_prime_number_helper(n, 2));
}
}
