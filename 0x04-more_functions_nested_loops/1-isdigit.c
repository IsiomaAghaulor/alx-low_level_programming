#include "main.h"                                                                                                                               
/**                                                                                                                                             
 *  *  _isdigit - checks if a character is a digit or not                                                                                       
 *   *  @c: character to be tested                                                                                                                  
 *    *  Return: 1 if it is, otherwise return 0                                                                                                      
 *     */  

int _isdigit(int c)
{
	if((c >= 48) && (c <= 57))
	{
		return(1);
	}
	return (0);
}
