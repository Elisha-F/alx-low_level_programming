#include "main.h"
/**
 *is_palindrome_helper - checks for a palindrome
 *@s: pointer of char type
 *@start: int variable
 *@end: int end
 *Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
else if (s[start] != s[end])
{
return (0);
}
else
{
return (is_palindrome_helper(s, start + 1, end - 1));
}
}

/**
 * is_palindrome - checks for a palindrome
 * @s: pointer of char type
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int n = strlen(s);
return (is_palindrome_helper(s, 0, n - 1));
}
