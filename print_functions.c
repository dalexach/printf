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
int print_num(unsigned int n, int c)
{
	if (n / 10)
		c = print_num(n / 10, c);
	_putchar(n % 10 + '0');
	return (c + 1);
}

/**
* print_integer - function that print an integer
*@lalista: list that contains the format inserted
*Return: counter of the integers printed
*/
int print_integer(va_list lalista)
{
	int number, count = 0;
	unsigned int unumber;

	number = va_arg(lalista, int);
	if (number < 0)
	{
		unumber = number * -1;
		_putchar('-');
		count = print_num(unumber, count);
		count += 1;
	}
	else
	{
		unumber = number;
		count = print_num(unumber, count);
	}
	return (count);
}

/**
* rot13 - function that converts a string into a rot 13 format
*@lalista: list that contains the format inserted
*Return: counter of the string
*/
int print_rot13(va_list lalista)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *c;

	c = va_arg(lalista, char *);
	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == a[j])
			{
				c[i] = r[j];
				break;
			}
		}
	}
	for (i = 0; c[i] != '\0'; i++)
	{
		_putchar(c[i]);
	}
	return (i);
}
