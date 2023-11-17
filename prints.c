#include "main.h"

/**
 * printf_string - prints a string
 * @cal: argument
 * Return: length of the string
 *
 */

int print_string(va_list val)
{
	char *str;
	int i;
	int length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		lenght = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (lenght);
	}
	else
	{
		lenght = _strlen(str);
		for (i = 0; i < lenght; i++)
			_putchar(str[i]);
		return (length);
	}
}
