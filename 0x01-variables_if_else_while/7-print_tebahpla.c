#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print alphabets in reverse
 *
 * Return: Always return 0
 */

int main(void)
{

	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);
	putchar('\n');
	return (0);


}
