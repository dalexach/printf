#include "holberton.h"
/**
 * _printf - Variadic function that prints in a formatted way
 * to the standard output
 * @format: input to print
 * Return: integer wiet tabstop=8 shiftwidth=8h the
 * amount of characters printed
 */
int _printf(const char *format, ...)
{
	int lenprinted;
	va_list lalista;

	va_start(lalista, format);
	if (format == NULL)
		return (-1);
	lenprinted = pickformat(lalista, format);

	va_end(lalista);
	return (lenprinted);
}

