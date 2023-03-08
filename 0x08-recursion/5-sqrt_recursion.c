/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: int n
 * Return: Natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (0);
}
int i;
for (i = 1; i * i <= n; i++)
{
if (i * i == n)
{
return (i);
}
}
return (-1);
}
