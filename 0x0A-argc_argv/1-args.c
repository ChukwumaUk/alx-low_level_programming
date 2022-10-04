#include <stdio.h>

/**
 * main - Write a program that prints the number of
 * arguments passed into it.
 * @argc: Number of arguments passed to the function
 * @argv: One dimensional array of strings
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);

return (0);
}
