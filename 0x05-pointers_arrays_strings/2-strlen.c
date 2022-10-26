#include "main.h"

/**
 * _strlen - count and returns string length
 * @s: That's the string
 * Return: The length
 */
int _strlen(char *s);
{
	int counter = 0;
	while (*s != 0)
	{
		counter++;
		s++;
	}
	return (counter);
}
