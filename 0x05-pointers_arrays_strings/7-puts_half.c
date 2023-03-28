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
		for (index = len / 2; index <= len; index++)
		{
			_putchar(str[index]);
		}
	}
	else
	{
		for (index = (len - 1) / 2; index <= len; index++)
		{
			_putchar(str[index]);
		}
	}

	_putchar('\n');
}
