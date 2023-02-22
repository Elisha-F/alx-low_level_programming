#include "main.h"
/**
 * print_last_digit - prints the last digit of an int
 * @last_digit: last digit for a number
 * Return: Always last digit
 */
int print_last_digit(int last_digit)
{
int number;
number = last_digit % 10;
if (number <0)
{
number = (-1 * number);
}
_putchar(number + '0');
return (number);
}
