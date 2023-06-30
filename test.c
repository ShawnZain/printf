#include "main.h"

/**
 * main - test my_printf function
 * Return: success
 */

int main(void)
{
	char c = 'a';
	char str[4] = "abcd";
	int num = 4567;
	int x, y;

	x = printf("This is a string printed with the std printf\n");
	printf("This is a string printed with the std printf\n");
	printf("Return Value: %d\n", x);
	printf("Char c: %c\n", c);
	printf("String str: %s\n", str);
	printf("I am a number 12\n");
	x = printf("The number to print is %d\n", num);
	printf("return value is: %d\n", x);

	printf("----------------------------------\n");

	y = my_printf("\nThis is a string printed with my_printf function\n");
	my_printf("\nThis is a string printed with my_printf function\n");
	my_printf("Char c: %c\n", c);
	my_printf("String str: %s\n", str);
	my_printf("I am a number 12\n");
	y = my_printf("The number to print is %d\n", num);
        my_printf("return value is: %d\n", y);

	return (0);
}
