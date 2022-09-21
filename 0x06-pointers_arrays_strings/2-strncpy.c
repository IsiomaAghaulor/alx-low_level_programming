#include "main.h"
#include <string.h>
/**
 *_strncpy ->  a function that copies a string.
 *@dest: parameter1
 *@src:parameter2
 *@n: parameter3
 *Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
