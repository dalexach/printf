#include "holberton.h"
/**
 * pickformat - compares the format given with a bunch of cases to print
 * @lalista: list of parameters to print
 * @format: input given
 * Return: amount of printed bytes
 *
 **/
int pickformat(va_list lalista, const char *format)
{
	int i, lenprinted = 0;
	char c;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (!format[i])
				return (-1);
			switch (format[i + 1])
			{
				case 'c':
					c = va_arg(lalista, int), _putchar(c), i++;
					break;
				case 's':
					lenprinted += print_str(lalista);
					lenprinted--, i++;
					break;
				case '%':
					_putchar('%'), i++;
					break;
				case '\0':
					lenprinted = -2;
					break;
				case 'd':
				case 'i':
					lenprinted += print_integer(lalista), lenprinted--, i++;
					break;
				case 'R':
					lenprinted += print_rot13(lalista), lenprinted--, i++;
					break;
				default:
					_putchar('%');
					break;
			}
		}
		else
			_putchar(format[i]);
		lenprinted++;
	}
	return (lenprinted);
}
