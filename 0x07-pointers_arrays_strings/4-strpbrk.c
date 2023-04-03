#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: input
 * @accept: input
 * Return: always 0(success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (*s == accept[k])
			{
				return (s);
			}
		}
		s++;
	}

	return ('\0');
}
