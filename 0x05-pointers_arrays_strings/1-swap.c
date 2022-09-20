#include "main.h"

/**
 * swap_int - swap values of two given integers
 * @x: parameter 1
 * @y: parameter 2
 */
void swap_int(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}
