#include <stdio.h>
#include <stdlib.h>

/**
 * main - to print alphabet in lowercase except q and e
 *
 * Return: always 0 (success)
 */

int main(void)

{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
