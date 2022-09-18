#include "main.h"

/**
 * print_numbers - Print nos 0 to 9
 *
 * Return: Always 0
 */

void print_numbers(void)
{

int dig;

for (dig = 0; dig <= 9; dig++)

_putchar((dig % 10) + '0');
_putchar('\n');

}
