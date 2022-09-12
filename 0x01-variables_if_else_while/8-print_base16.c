#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int l, m;
	for (l = '0'; l < '9'; l++)
	{
		putchar (l);
	}
	for (m = 'a'; m <= 'f'; m++)
	{
		putchar (m);
	}
	putchar ('\n');
	return (0);
}
