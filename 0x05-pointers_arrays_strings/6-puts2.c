#include "main.h"
#include <string.h>

/**
 * puts2 - prints out every other character of the string
 * @str: inputs string to print
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
