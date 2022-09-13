#include "main.h"

/**
 * main - check the code
 *
 * print_alphabet: prints alphabets in lower case
 *
 * Return:Always 0
 */

void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
_putchar('\n');
}
}
