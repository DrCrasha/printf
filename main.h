#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

typedef struct format
{
	char *id;
	int (*f)();

}match;


int _putchar(char c);
int _printf(const char *format, ...);
int print_string(va_list val);
int printf_char(va_list val);
int _strlen(char *str);
int print_37(void);
int _strlenc(const char *str);
int printf_dec(va_list args);
int printf_int(va_list args);
int print_bin(va_list val);
int printf_unsigned(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_HEX_extra(unsigned int num);
int print_exc_string(va_list val);
int print_pointer(va_list val);
int print_hex_extra(unsigned long int num);
int print_revs(va_list val);
int print_rot13(va_list val);


#endif
