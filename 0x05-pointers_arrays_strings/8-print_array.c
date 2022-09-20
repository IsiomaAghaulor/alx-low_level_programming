#include "main.h"
#include <stdio.h>
/**
 * print_array -> prints n elements of an array of integer.
 *@a: parameter1
 *@n:parameter2
 *Return:void
 */
void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);
}
	_putchar(10);
