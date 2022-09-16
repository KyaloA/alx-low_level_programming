#include "main.h"
/**
 * main - Entry
 * print alphabet in lower case followed by new line
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
