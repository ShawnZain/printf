#include "printf.h"

/**
 * my_printf - prints arguments passed to the std output
 * @format: what to print out
 * Return: the length of the string that we are printing out
 */

int my_printf(const char *format, ...)
{
	int i;
	char *c; /* to store a string parameter */
	int r_value = 0; /* our return value */
	va_list args;
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			i++; /* wont print % and not the c, but the char in c */
		}
		else if (format[i + 1] == 's')
		{
			c = va_arg(args, char *);
			if (c == NULL)
			{
				c = "(nill)";
			}

			r_value += print_string(c);
			i++;
			continue;
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			h++;
		}
		else if (format[i + 1] == 'd'

		r_value += 1;
	}
	r_value -= 1;
	va_end(args);	
	printf("%d\n", r_value);
	return (r_value);
}
