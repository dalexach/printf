#include "holberton.h"
/**
 * _putchar - prints one single character
 * @c: char to print
 * Return: integer with the amount of bytes printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
