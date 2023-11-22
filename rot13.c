#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);

int main()
{
	_printf("Original: Hello, World!\n");
	_printf("Rot13'd: %R\n", "Hello, World!");
	return 0;
}

int _printf(const char *format, ...) {
	va_list args;
	va_start(args, format);

	int count = 0;

	while (*format)
	{
		if (*format == '%' && *(format + 1) == 'R')
		{
			format += 2;
			const char *str = va_arg(args, const char *);

			while (*str)
			{
				if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')) 
				{
					char base = (*str >= 'a' && *str <= 'z') ? 'a' : 'A';
					putchar(((*str - base + 13) % 26) + base);
				}
				else
				{
					putchar(*str);
				}
				str++;
				count++;
			}
		}
		else
		{
			putchar(*format);
			format++;
			count++;
		}
	}

	va_end(args);
	return 	(count);
}
