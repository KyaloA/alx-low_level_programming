#include "main.h"
#include <stdio.h>

/**
 * *_strcat - is a function strcat
 * @dest: first parameter
 * @src: second parameter
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
			return (temp);
}
