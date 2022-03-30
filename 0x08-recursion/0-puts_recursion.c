#include "main.h"
/**
 * _puts_recursion - print something
 * @s: parameter
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;

	for (; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
