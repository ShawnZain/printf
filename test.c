#include "printf.h"

/**
 * main - test my_printf function
 * Return: success
 */

int main(void)
{
	char c = 'a';
	char str[4] = "abcd";
	int x, y;

	x = printf("This is a string printed with the std printf\n");
	printf("This is a string printed with the std printf\n");
	printf("Return Value: %d\n", x);
	printf("Char c: %c\n", c);
	printf("String str: %s\n", str);

	printf("----------------------------------\n");

	y = my_printf("\nThis is a string printed with my_printf function\n");
	my_printf("\nThis is a string printed with my_printf function\n");
	my_printf("Char c: %c\n", c);
	my_printf("String str: %s\n", str);

	return (0);
}
