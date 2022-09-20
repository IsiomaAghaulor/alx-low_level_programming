#include "main.h"

/**
 * _strcpy -> a function that copies the string pointed to by src.
 *@dest: parameter1
 *@src:parameter2
 */
char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';
	return (dest);
}
