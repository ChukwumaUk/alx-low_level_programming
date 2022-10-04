#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives.
 *
 * @argc: Number of arguments passed to the function
 * @argv: One dimensional array of strings
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
