#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int count, i = 0;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			i++;
		}
		printf("%d\n", i);
	}
	else
		printf("0\n");

	return (0);
}
