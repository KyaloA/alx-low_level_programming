#include "main.h"
/**
 * main - Entry
 * print_alphabet:prints in lower case followed by new line
 * Return: Nothing
 */
void print_alphabet(void)
{
	int x;

	for(x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
