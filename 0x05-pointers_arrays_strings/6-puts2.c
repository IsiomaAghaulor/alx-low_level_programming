#include "main.h"
#include <string.h>
/**
 * puts2 ->  a function that prints every other character of a string.
 * @str: input string
 * Return:void
 *
 *
 */
void puts2(char *str)
{
	int len, i;

	for (i = 0; i < len; i += 2)
	{
	_putchar(str[i]);
	_putchar('\n');
	}
}
