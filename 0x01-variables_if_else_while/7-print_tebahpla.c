#include <stdio.h>

/**
 * main - to print lowercase alphabets in reverse,
 * followed by a new line
 * Return: always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
