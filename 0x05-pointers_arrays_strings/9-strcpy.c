#include "main.h"
#include<stdio.h>

/**
 * _strcpy -> a function that copies the string pointed to by src.
 *@dest: parameter1
 *@src:parameter2
 */
char *_strcpy(char *dest, char *src)
{
	int inc;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';
	return (dest);
}
