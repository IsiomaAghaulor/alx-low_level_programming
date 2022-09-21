#include "main.h"

/**
*_strcat -> appends the src string to the dest string.
*@dest: first parameter
*@src: second parameter
*Return: char
*/
char *_strcat(char *dest, char *src)
{	int len, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}

