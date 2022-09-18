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
int line;

if (n > 0)
{
for (line = 0; line <= n; line++)
	_putchar('_');

}
_putchar('\n');
}
