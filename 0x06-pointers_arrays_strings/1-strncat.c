#include "main.h"
#include <string.h>

/**
 *_strncat ->  a function that concatenates two strings.
 *@dest: parameter1.
 *@src: parameter2
 *@n: parameter3
 *Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
