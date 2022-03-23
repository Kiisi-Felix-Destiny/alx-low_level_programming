#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: first char pointer parameter
 * @src: second char pointer parameter
 * @n: third parameter
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
