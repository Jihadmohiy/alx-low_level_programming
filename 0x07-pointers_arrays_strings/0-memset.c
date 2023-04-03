#include "main.h"
/**
 * *_memset - fills memory with a constant byte.
 * @s: started address
 * @b: the desired value
 * @n: number of bites to be changed
 * Return: changed array with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
