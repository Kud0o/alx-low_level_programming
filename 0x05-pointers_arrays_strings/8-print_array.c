#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * print_array - printing numbers
 * @s: char pointer
 * @n: int
 * Return: void
*/

void print_array(int *s, int n)
{
for (i = 0; i < n; i++)
	{
	printf("%d", s[i]);
	if (i != n - 1)
	{
		printf(", ");
	}
	}
printf('\n');
}
