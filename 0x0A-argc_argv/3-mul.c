#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of argv array
 * @argv: an array of command line arguements
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count, mul;

	if (argc == 3)
	{
		for (count = 0; count < argc; count++)
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error");
		printf("\n");
		return (0);
	}
}
