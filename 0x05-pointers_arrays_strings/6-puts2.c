#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 *
 * @str : string to be treated
 * Return : nothing
 */
void puts2(char *str)
{
	int len = 0;
	int index;

	while (str[len] != '\0')
	{
		len++;
	}
	for (index = 0; index < len; index += 2)
	{
		_putchar(str[index]);
	}

	_putchar('\n');
}
