#include <stdio.h>
/**
 * main - Entry point
 * @argc: The size of the argv array
 * @argv: An array of size argc
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;

	int total;

	total = 0;

	for (count = 1; count < argc; count++)
	{
		total++;
	}
	printf("%d\n", total);

	(void)argv;

	return (0);
}
