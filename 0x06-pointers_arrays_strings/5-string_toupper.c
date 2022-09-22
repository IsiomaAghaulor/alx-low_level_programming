#include "main.h"

/**
 *string_toupper -> a function that changes lowercase letters to uppercase.
 *@str: parameter1
 *Return:char
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
		return (str);
}
