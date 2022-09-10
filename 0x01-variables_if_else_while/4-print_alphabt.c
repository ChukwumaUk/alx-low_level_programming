#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: print alphabets except q and e
 *
 * Return: Always return 0
 */

int main(void)
{

char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{

	if (letter != 'q' && letter != 'e')
		putchar(letter);

}
putchar ('\n');
return (0);

}
