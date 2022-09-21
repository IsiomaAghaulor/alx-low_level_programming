#include "main.h"
#include <string.h>

/**
 *string_toupper -> a function that changes lowercase letters to uppercase.
 *@*:parameter1
 *Return:char
 */
char *string_toupper(char *)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
		return (str);
}
