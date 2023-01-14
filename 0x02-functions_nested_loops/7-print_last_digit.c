#include "main.h"
/**
 * print_last_digit - prints the last digit of a numer.
 * @n: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (b < 0)
	{
		b = -1 * b;
		_putchar(b + '0');
	}
	else
	{
		_putchar(b + '0');
	}
	return (b);
	}
