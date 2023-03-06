#include "main.h"

/**
  * _memcpy - copying some memory area
  * @dest:pointer to return
  * @src: source memory area
  * @n: bytes number to copy
  *
  * Return: char pointer
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
