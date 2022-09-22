#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings, ending at the first byte that is different
 * @s1: string 1
 * @s2: string 2
 * Return: difference s1 - s2
 */
int _strcmp(char *s1, char *s2);
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
