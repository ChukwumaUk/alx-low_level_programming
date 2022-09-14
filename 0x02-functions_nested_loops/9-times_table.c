#include "main.h"

/**
 * times_table - prints the 9 times table, from 0
 *
 * Return: void
 */

void times_table(void)
{

	int p, q, z;

for (p = 0; p <= 9; p++)
{
_putchar(0);

for (q = 1; q <= 9; q++)
{
	_putchar(',');
_putchar(' ');

z = p * q;
if (z <= 9)
	_putchar(' ');
else
	_putchar((z / 10) + '0');
_putchar((z % 10) + '0');

}
_putchar('\n');
}
}
