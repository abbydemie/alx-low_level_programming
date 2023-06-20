#include <stdio.h>

/**
 * main - to print all single digits number of base 10 from 0
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
