#include "holberton.h"
/**
* print_char - function that prints a character
*@lalista: list that contains the format inserted
*@tot: sum of all the characters printed
*Return: tot
*/
int print_char (va_list *lalista, int *tot)
{
	char c;

	c = (char) va_arg(*lalista, int);
	_putchar(c);
	*tot += 1;
	return (*tot);
}

/**
* print_str - function that print a string
*@lalista: list that contains the format inserted
*@tot: sum of all the characters printed
*Return: tot
*/
int print_str(va_list *lalista, int *tot)
{
	char *str;
	int i;

	str = va_arg(*lalista, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		*tot += 1;
	}
	return (*tot);
}

/**
* print_percent - function that print a percent
*@tot: sum of all the characters printed
*Return: tot
*/
int print_percent(int *tot)
{
	char c = '%';

	_putchar(c);
	tot += 1;
	return (tot);
}
