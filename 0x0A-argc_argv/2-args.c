#include "main.h"
#include <stdio.h>

/**
 * main - Prints arguments
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{

	for (i = 0; *argv; i++, argv++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
