#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
int i = 0;
for( i = 0; i < ( int)sizeof( s); i++)
{
putchar(s[i]);
}
//putchar('\n');
return (1);
}
