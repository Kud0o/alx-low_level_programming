#include "main.h"
#include "stdio.h"
/**
 * _puts - printing string
 * @s: char pointer
 * Return: void
*/

void _puts(char *s)
{
puts(s);
int i = 0;
while (1)
{
	_putchar(s[i]);
	if (s[i++] == '\0')
	{
		_putchar('\n');
		break;
	}
}
}
