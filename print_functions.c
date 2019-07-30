#include "holberton.h"
/**
* print_str - function that print a string
*@lalista: list that contains the format inserted
*@tot: sum of all the characters printed
*Return: tot
*/
int print_str(va_list lalista)
{
	char *str;
	int i;

	str = va_arg(lalista, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
