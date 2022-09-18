#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 *
 * @n: no of times the xter _ should be printed
 *
 * Return: Void
 */

void print_line(int n)
{
int lin;

if (n > 0)
{
for (lin = 0; lin < n; lin++)
	_putchar('_');

}
_putchar('\n');
}
