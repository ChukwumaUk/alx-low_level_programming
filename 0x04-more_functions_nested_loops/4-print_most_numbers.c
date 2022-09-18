#include "main.h"

/**
 * print_most_numbers - print nos 0-9 and new line
 *
 * Return: void
 */

void print_most_numbers(void)
{
int dig;

for (dig = 0; dig <= 9; dig++)
{
if (dig != 2 && dig != 4)
	_putchar((dig % 10) + '0');
}
_putchar('\n');
}
