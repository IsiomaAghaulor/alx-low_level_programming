#include "main.h"
/**
 * prints_numbers - prints form 0 to 9, followed by a new line
 * Return: void
 */

void print_numbers(void)
{
	int i;
	for(i = 48; i < 58; i++)
	{	
	putchar(i);
	}
	putchar(10);
}
