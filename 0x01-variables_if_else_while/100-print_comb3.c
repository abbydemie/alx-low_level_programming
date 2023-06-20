#include <stdio.h>

/**
 * main - to print all possible different combinations of two digit
 *
 * Return: always 0 (success)
 *
 */

int main(void)

{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '0'; tens++)/* prints tens digit*/
	{
		for (ones = '0'; ones <= '0' ; ones++)/* prints ones digit*/
		{
			if (!((ones == tens) || (tens > ones)))/*eliminate repitition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '0' && tens == '0'))/*addes comma and space*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
