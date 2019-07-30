#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);
int pickformat(va_list lalista, const char *format);
/* task 0 */
int print_str(va_list lalista);
/* task 1*/
int print_integer(va_list lalista);
int print_num(unsigned int n, int c);
/* advanced */
int print_rot13(va_list lalista);
#endif /* HOLBERTON_H */
