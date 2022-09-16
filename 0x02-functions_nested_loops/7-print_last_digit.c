#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: the passed args
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
		r = (n % 10) * -1;
	else
		r = n % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
