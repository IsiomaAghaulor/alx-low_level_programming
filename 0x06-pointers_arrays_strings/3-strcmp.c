#include "main.h"
#include <string.h>

/**
 *_strcmp -> a function that compares two strings.
 *@s1:parameter1
 *@s2:parameter2
 *Return: int
 *
 */
int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	return (result);
}
