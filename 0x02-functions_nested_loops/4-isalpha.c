#include "main.h"
/**
 * _isalpha - checks for alphabetical letters
 * @c: a character to be checked on
 * Return: returns 1 or 0 depending on condition
 */
int -isalpha(int c)
{
	return ((c >= 'a' && c<= 'z') || (c >= 'A' && c <= 'Z'));
}
