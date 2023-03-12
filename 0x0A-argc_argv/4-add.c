#include "main.h"
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 when successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
int sum = 0;
int count;
if (argc == 1)
{
printf("0\n");
}
for (count = 1; count < argc; count++)
{
if (atoi(argv[count]) >= 0)
{
sum += atoi(argv[count]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}
