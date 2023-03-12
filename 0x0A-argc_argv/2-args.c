#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: argument number
 * @argv: vector arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
int count;
for (count = 0; count < argc; count++)
{
printf("%s\n", argv[count]);
}
return (0);
}
