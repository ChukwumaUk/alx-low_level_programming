#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers.
 * Your program should print the result of the multiplication,
 * followed by a new line
 * You can assume that the two numbers and result of the
 * multiplication can be stored in an integer
 * If the program does not receive two arguments, your program
 * should print Error, followed by a new line, and return 1
 * @argc: Number of arguments passed to the function
 * @argv: Argument vector of pointers to strings
 * Return: Return 0 if no errors, else 1
 */

int main(int argc, char *argv[])
{
int a, b, c;

if (argc != 3)
{
puts("Error");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);

c = a * b;

printf("%d\n", c);

return (0);
}
