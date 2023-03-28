#include "main.h"
/**
 * puts_half - prints half of a string
 * @str : string to be treated
 * Return : nothing
 */
void puts_half(char *str)
{
	int index;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		index = len / 2;
	}
	else
	{
		index = (len - 1) / 2;
	}
	for (; index < len; index++)
	{
		_putchar(str[index]);
	}

	_putchar('\n');
}
