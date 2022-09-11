#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Print all double digit numbers
 *
 * Return: Always return 0
 */

int main(void)
{
int num;
for (num = 10; num < 100; num++)
{
putchar((num % 10) + '0');
if (num == 99)
	continue;
putchar(',');
putchar(' ');

}
putchar('\n');
return (0);



}
