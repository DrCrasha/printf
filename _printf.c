#include "main.h"

/**
 * _printf - print to stout
 * @format: format specifier
 * Return: number of printed bytes
 */
int _printf(const char *format, ...)
{
	unsigned int i, s_count, count = 0;

	va_list args;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_myputchr(format[i]);
		}
		else
		{
			switch (format[i + 1])
			{
			case 'c':
				_myputchr(va_arg(args, int));
				break;
			case 's':
				s_count = putss(va_arg(args, char *));
				count += (s_count - 1);
				break;
			case '%':
				_myputchr('%');
				break;
			case 'd':
			case 'i':
				_myputchr(va_arg(args, int));
				break;
			case 'u':
				_myputchr(va_arg(args, unsigned int));
				break;
			case 'o':
				count += binary_conversion_octal(va_arg(args, unsigned int));
				break;
			case 'x':
				count += binary_conversion_hex(va_arg(args, unsigned int), 0);
				break;
			case 'X':
				count += binary_conversion_hex(va_arg(args, unsigned int), 1);
				break;
			default:
				_myputchr('%');
				_myputchr(format[i + 1]);
				break;
			}
			i++;
		}
		count++;
	}
	va_end(args);
	return (count);
}
