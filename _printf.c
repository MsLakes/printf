#include "main.h"
#include <string.h>

/**
 * _printf - Custom printf function
 * @format: format strings
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;

	char_count = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
		}
		switch (*format)
		{
			case 'c':
				print_char(va_args(args, int));
				char_count++;
				break;
			case 's':
				print_string(va_arg(args, char *));
				char_count += strlen(va_arg(args, char *));
				break;
			case '%':
				print_char('%');
				char_count++;
				break;
			default:
				print_char('%');
				char_count++;
				continue;
		}
		else
		{
			print_char(*format);
			char_count++;
		}
		format++;
	}
	va_end(args);

	return (char_count);
}
