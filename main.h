#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int _myputchr(char c);
int _printf(const char *format, ...);
int putss(char *c);
int binary_conversion(unsigned int num);
int binary_conversion_octal(unsigned int num);
int binary_conversion_hex(unsigned int num, int uppercase);


#endif
