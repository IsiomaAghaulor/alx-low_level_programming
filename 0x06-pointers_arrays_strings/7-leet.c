#include "main.h"

/**
 *leet -> a function that encodes a string into 1337.
 *@str:parameter1
 *Return:string
 */
char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = transform(str[i]);
		i++;
	}
	return (str);
}

/**
 *transform -> maps a letter with its leet encoding
 *@x:char to be encoded
 *Return: the encoded char
 */
char transform(char x)
{
	char mapping_low[8] = {'o', 'l', '\0', 'e', 'a', '\0', 't'};
	char mappint_upper[8] = {'O', 'L', '\0', 'E', 'A', '\0', 'T'};
	int i = 0;
	char replacement = x;

	while (i < 8)
	{
		if (x == mapping_low[i] || x == mappint_upper[i])
		{
			replacement = i + '0';
			break;
		}
		i++;
	}
	return (replacement);
}
