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
if (e != 'e' && q != 'q')
{
putchar(alphabt);
}
}
putchar('\n');
return (0);
}
