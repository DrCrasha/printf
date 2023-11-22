#include "main.h"

/**
 * binary_conversion - converts to binary
 * @num: number to convert to binary
 * Return: i
 *i
 */

int binary_conversion(unsigned int num)
{
	char binary[32];

	int i = 0;
	int j = 0;

	while (num > 0)
	{
		binary[i] = (num % 2) + '0';
		num /= 2;
		i++;
	}
	if (i == 0)
	{
		_myputchr('0');
		return 1;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_myputchr(binary[j]);
	}
	return (i);
}
