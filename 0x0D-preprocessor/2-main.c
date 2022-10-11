#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print name of file 2-main.c
 *
 * Description: Write a program that prints the name
 * of the file it was compiled from, followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{

printf("%s", __FILE__);

return (0);
}
