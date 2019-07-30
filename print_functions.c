#include "holberton.h"
/**
* print_str - function that print a string
*@lalista: list that contains the format inserted
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

/**
* print_num - recursive function to print a number
*@n: number to print
*@c: length of the number
*Return: counter
*/
int print_num(int n, int c)
{
	if (n / 10)
		c = print_num(n / 10, c);
	putchar(n % 10 + '0');
	return(c + 1);
}

/**
* print_integer - function that print an integer
*@lalista: list that contains the format inserted
*Return: counter of the integers printed
*/
int print_integer(va_list lalista)
{
	int number, count = 0;

	number = va_arg(lalista, int);
	count = print_num(number, count);
	return (count);
}
