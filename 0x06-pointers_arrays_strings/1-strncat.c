#include "main.h"
#include <string.h>
/**
 * _strncat - concantenates two strings
 * @dest: destinantion var
 * @src: source var
 * @n: n bytes to be used in src
 * Return: pointer to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
