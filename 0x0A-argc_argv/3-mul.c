#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0 when successful and 1 otherwise
 */
int main(int argc, char *argv[])
{
/*int count;*/
long mult;
if (argc == 3)
{
mult = atoi(argv[1]) *atoi(argv[2]);
}
else
{
printf("Error\n");
return (1);
}
printf("%ld\n", mult);
return (0);
}
