#include "main.h"

/**
 *_strlen -> a function that returns the length of a string.
 *@s: parameter1
 *Return: string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}


/**
*cap_string -> a function that capitalizes all words of a strin
*@str: parameter
*Return:string
*/
char *cap_string(char *str)
{
	int index = 0;

	while (str[++index])
	{
		while (!(str[index] >= 'a') && (str[index] <= 'z'))
			index++;

		if (str[index - 1] == ' ' ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' ||
				str[index - 1] == ',' ||
				str[index - 1] == ';' ||
				str[index - 1] == '.' ||
				str[index - 1] == '!' ||
				str[index - 1] == '?' ||
				str[index - 1] == '"' ||
				str[index - 1] == '(' ||
				str[index - 1] == ')' ||
				str[index - 1] == '{' ||
				str[index - 1] == '}')
			str[index] -= 32;
	}
	return (str);
}
