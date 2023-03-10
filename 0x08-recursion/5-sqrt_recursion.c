/**
 * _sqrt_helper - returns natural square root of a number
 * @n: int n
 * @low: lower range
 * @high: higeher limit
 * Return: Natural square root
 */
int _sqrt_helper(int n, int low, int high)
{
int mid = (low + high) / 2;
int square = mid * mid;
if (low > high)
{
return (-1);
}
if (square == n)
{
return (mid);
}
else if (square < n)
{
return (_sqrt_helper(n, mid + 1, high));
}
else
{
return (_sqrt_helper(n, low, mid - 1));
}
}

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
else if (n == 0)
{
return (0);
}
else
{
return (_sqrt_helper(n, 1, n));
}
}
