#include "holberton.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>

/**
 * print_char - Prints a character
 * @arg_list: character to print
 *
 * Return: On success 1, otherwise -1
 */
int print_char(va_list arg_list)
{
	return (_putchar(va_arg(arg_list, int)));
}

/**
 * print_string - Prints a string
 * @arg_list: string to print
 *
 * Return: On success, number of characters printed, otherwise -1
 */
int print_string(va_list arg_list)
{
	int i;
	char *s;

	s = va_arg(arg_list, char *);

	for (i = 0; s[i] != '\0'; i++)
		if (_putchar(s[i]) == -1)
			return (-1);
	return (i);
}

/**
 * print_int - Prints integer or decimal
 * @arg_list: Integer to print
 *
 * Return: On success, number of characters printed, otherwise -1
 */
int print_int(va_list arg_list)
{
	int n, num, last, digit, exp, i;

	n = va_arg(arg_list, int);
	last = n % 10;
	exp = 1;
	i = 1;
	n /= 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num *= -1;
		n *= -1;
		last *= -1;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp *= 10;
			num /= 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			if (_putchar(digit + '0') == -1)
				return (-1);
			num -= (digit * exp);
			exp /= 10;
			i++;
		}
	}
	if (_putchar(last + '0') == -1)
		return (-1);
	return (i);
}

/**
 * print_binary - Prints a binary number
 * @arg_list: Number to print
 *
 * Return: On success, number of characters printed, otherwise -1
 */
int print_binary(va_list arg_list)
{
	unsigned int num;
	int i;
	char buff[1024];

	num = va_arg(arg_list, unsigned int);

	for (i = 0; num > 0; i++)
	{
		buff[i] = (num % 2) + '0';
		num /= 2;
	}
	num = (unsigned int)i;
	for (i -= 1; i >= 0; i--)
	{
		if (_putchar(buff[i]) == -1)
			return (-1);
	}
	return ((int)num);
}
