#include "main.h"
#include <stdio.h>

/**
 * print_array - Write a function that prints n elements of an
 *               array of integers, followed by a new line.
 * @a: array of integers
 * @n: The number of elements to be printed
 */

void print_array(int *a, int n)
{

int indx;

for (indx = 0; indx < n; indx++)
{
printf("%d", a[indx]);

if (indx == n - 1)
continue;

printf(', ');

}
printf('\n');
}
