#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - ENtry point
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int d = 0;
	while (d < 10)
	{
		putchar(48 + d);
		if (d != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
	}
