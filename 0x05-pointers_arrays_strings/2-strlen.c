#include "main.h"

/**
 * _strlen - functions that return the length of a string
 * @n: string to be checked
 * Return: the length of the string
 */

int _strlen(char *s)
{

int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}