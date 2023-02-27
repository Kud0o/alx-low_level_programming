#include "main.h"
#include "stdio.h"
/**
 * _puts - printing string
 * @s: char pointer
 * Return: void
*/

void _puts(char *s)
{
int i = 0;
while (1)
{
	if (s[i] == '\0')
	{
		_putchar('\n');
		break;
	}
	else
	{
		if (i % 2 == 0 )
		{
			_putchar(s[i]);
		}
		i++;
	}
}
}
