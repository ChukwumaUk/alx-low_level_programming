#include "main.h"

/**
 * print_diagonal - Draw a diagonal on the terminal
 *
 * @n: the no of times the xter \ should be printed
 *
 * Return: Void
 */

void print_diagonal(int n)
{
int lin, space;

if (n > 0)
{
for (lin = 0; lin < n; lin++)
{
for (space = 0; space < lin; space++)
	_putchar(' ');
_putchar('\\');
if (lin == n - 1)
	continue;
_putchar('\n');

}

}
_putchar('\n');

}
