#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array -  array for prints a string
 * @size: number elements array
 * @c: char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int pos;

	if (size == 0)
		return (NULL);
	buffer = (int *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		pos = 0;
		while (pos < size)
		{
			*(buffer + pos) = c;
			pos++;
		}
		return (buffer);
	}
}
