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
	print_data_t  f[] = {
	{'c', print_char},
	{'s', print_str},
	};
	int i, j, lenprinted, *tot = 0;
	va_list lalista;

	va_start(lalista, format);
	if (format == NULL)
		return (-1);
	tot = malloc(sizeof(int));
	if (tot == NULL)
		return (0);
	va_start(lalista, format);
	for (i = 0; format[i];)
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				return (-1);
			for (j = 0; j < 2; j++)
			{
				if (format[i] == (f[j].form))
					*tot = f[j].print(&lalista, tot), i++;
			}
			if ((format[i] == '%') || (format[i - 1] == '%'))
			{
				if (format[i] == '%')
					*tot = print_percent(tot), i++;
				else
					*tot = print_percent(tot), write(1, format + i, 1), *tot += 1, i++;
			}
		}
		else
			write(1, format + i, 1), *tot += 1, i++;
	}
	lenprinted = *tot;
	free(tot), va_end(lalista);
	return (lenprinted);
}

