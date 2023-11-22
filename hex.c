#include "main.h"

/**
 * binary_conversion_hex - converts to hexadecimal and upper case
 * @num: hexadecimal converted
 * @uppercase: parameter to be converted to uppercase
 * Return: converted string
 *
 */


int binary_conversion_hex(unsigned int num, int uppercase)
{
	char hex[32];
	int i = 0;
	int j = 0;

	if (num == 0)
	{
		_myputchr('0');
		return (1);
	}

	while (num > 0)
	{
		int remainder = num % 16;

		if (remainder < 10)
		{
			hex[i] = remainder + '0';
		}
		else
		{
			hex[i] = (uppercase) ? (remainder - 10 + 'A') : (remainder - 10 + 'a');
		}
		num /= 16;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_myputchr(hex[j]);
	}
	return (i);
}
