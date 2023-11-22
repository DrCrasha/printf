#include "main.h"

/**
 * _myputchr - prints a character
 * @c: charater input
 * Return: 1
 *
 */

int _myputchr(char c)
{
	return (write(1, &c, 1));
}
