#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 when successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
int i, j, num;
int sum = 0;
for (i = 1; i < argc; i++)
{
char *num_str = argv[i];
for (j = 0; num_str[j] != '\0'; j++)
{
if (!isdigit(num_str[j]))
{
printf("Error\n");
return (1);
}
}
num = atoi(num_str);
if (num > 0)
{
sum += num;
}
}
printf("%d\n", sum);
return (0);
}
