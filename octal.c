#include "main.h"

/**
 * binary_conversion_octal - converts to octal
 * @num: number to be converted
 * Return: int converted
 */

int binary_conversion_octal(unsigned int num)
{
	char octal[32];
	int i = 0;
	int j = 0;

	if (num == 0)
	{
		_myputchr('0');
		return (1);
	}

	while (num > 0)
	{
		octal[i] = (num % 8) + '0';
		num /= 8;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_myputchr(octal[j]);
	}
	return (i);
}
