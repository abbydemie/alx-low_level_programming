#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: swaps and stores value of b
 * @b: swaps and stores value of a
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
int change;
change = *b;
*b = *a;
*a = change;
}
