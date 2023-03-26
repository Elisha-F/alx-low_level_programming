#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - prints opcodes of its main function
 * @func_ptr: pointer one
 * @num_bytes: int variable
 * Return: 0 Always
 */
void print_opcodes(void *func_ptr, int num_bytes)
{
int i;
unsigned char *func = (unsigned char *)func_ptr;
for (i = 0; i < num_bytes; i++)
{
printf("%02x ", func[i]);
}
printf("\n");
}
/**
 * main - mai function
 * @argc: argv size
 * @argv: argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}
int num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
return (2);
}
print_opcodes(main, num_bytes);
return (0);
}
