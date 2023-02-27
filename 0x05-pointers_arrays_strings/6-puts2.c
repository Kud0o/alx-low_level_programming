#include "main.h"
#include "stdio.h"
/**
 * puts2 - printing string
 * @s: char pointer
 * Return: void
*/

void puts2(char *s)
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
		if (i % 2 == 0)
		{
			_putchar(s[i]);
		}
		i++;
	}
}
}
