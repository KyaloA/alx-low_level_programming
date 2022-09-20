#include <unistd.h>
/**
 * _putchar - writes char to std out
 * @c: char to print
 * Return 1 on success
 * on error, -1 is returned and set errno
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
