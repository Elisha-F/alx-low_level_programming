#include "main.h"
/**
 * main - prints the number of arguments passed into it
 * @argc: No. of arguments
 * @argv: argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
argv[0] = 0;
printf("%d\n", argc - 1);
return (0);
}
