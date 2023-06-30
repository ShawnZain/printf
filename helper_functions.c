#include "main.h"

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

/**
 * digit_count - counts the number of digits in an integer
 * @num: number passed for us to find out the numbe of digits
 * Return: number of digits
 */

int digit_count(int num)
{
	int *counter;
	int i;

	counter = malloc(sizeof(int) * 1034);

	for (i = 0; num != 0; i++)
	{
		counter[i] = num % 10;
		num = num / 10;
	}
	free(counter);

	return (i);
}

/**
 * print_int - prints integers
 * @num: number to print out
 * Return: the number of times that a number has been printed
 */

int print_int(int num)
{
	int ret_val;
	int n;

	if (num / 10 == 0)
	{
		_putchar(num + '0');
		return (0);
	}
	else
	{
		n = num / 10;
		print_int(n);
		_putchar((num % 10) + '0');
	}

	return (digit_count(num));
}
