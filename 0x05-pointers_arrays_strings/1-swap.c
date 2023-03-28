#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 * @a : first num to be swapped
 * @b : second num to be swapped
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
