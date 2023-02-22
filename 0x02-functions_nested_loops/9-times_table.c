#include "main.h"
/**
 * times_table - prints the 9 times table
 * iRow = row,iCol = column, iTable= results of multiplication
 * Return: times table
 *
 */
void times_table(void)
{
int iCol, iRow, iTable;
for (iRow = 0; iRow <= 9; iRow++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (iCol = 1; iCol <= 9; iCol++)
{
iTable = (iRow * iCol);
if ((iTable / 10) > 0)
{
_putchar((iTable / 10) + '0');
}
else
{
_putchar(' ');
}
_putchar((iTable % 10) + '0');
if (iCol < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
