#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: The size of the argv array
 * @argv: An array of size argc
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count, x, y, mul;

	if (argc == 3)
	{
		for (count = 0; count < argc; count++)
		{
			if (count == 1)
				x = atoi(argv[count]);
			if (count == 2)
				y = atoi(argv[count]);
		}
		mul = x * y;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error");
		printf("\n");
	}

	return (0);
}
