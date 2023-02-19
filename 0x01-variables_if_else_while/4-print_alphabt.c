#include <stdio.h>
/**
 * main - Entry into main
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabt, e, q;
e = 'e';
q = 'q';
for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
{
if (alphabt != e && alphabt != q)
{
putchar(alphabt);
}
}
putchar('\n');
return (0);
}
