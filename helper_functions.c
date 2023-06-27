#include "printf.h"

/**
 * _putchar - prints out single characters to std out
 * @char: character to print out
 * Return: the message printed
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}

/**
 * print_string - used to print a string
 * @c: array to print
 * Return: length of the string
 */

int print_string(char *c)
{
	int r = 0;

	for (; c[r] != '\0'; r++)
	{
		_putchar(c[r]);
	}

	return (r);
}
