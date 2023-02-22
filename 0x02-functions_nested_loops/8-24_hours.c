#include "main.h"
/**
 * jack_bauer - print every minute of the day of jack bauer
 * h = hour, m - minutes
 * / allows second digit to rotate
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
int hour, minute;
while (hour < 24)
{
for (minute = 0; minute < 60; minute++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
hour++;
}
}
}
