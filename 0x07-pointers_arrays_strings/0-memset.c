#include "main.h"

/**
 * _memset - filling first n places in memory with constant values b
 * @s: pointer to char params
 * @b: constant byte
 * @n: byte of mem area
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
