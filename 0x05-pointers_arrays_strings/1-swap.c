#include <main.h>

/**
 * swap_int - swape the value of two integers
 *		using two input parameters
 *
 * @a: input parameters 1
 * @b: input parameters 2
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
