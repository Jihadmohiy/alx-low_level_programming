#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: ...
 * Return: two string which concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, y = 0, i;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[x] != '\0')
	{
		x++;
	}
	while (s2[y] != '\0')
	{
		y++;
	}

	if (n > y)
		n = y;
	str = malloc(sizeof(char) * (x + n + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < x; i++)
		str[i] = s1[i];
	for (; i < (x + 1); i++)
		str[i] = s2[i - x];
	str[i] = '\0';
	return (str);
}
