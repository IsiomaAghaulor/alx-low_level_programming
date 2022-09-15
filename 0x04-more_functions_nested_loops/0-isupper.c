#include "main.h"
/**
 *  _isupper - checks if a character is upper case or not
 *  @c: character to be tested
 *  Return: 1 if it is, otherwise return 0
 */

int _isupper(int c)
{
	if((c >= 'A') && (c <= 'Z'))
	{
		return(1);
	}
	return (0);

} 

