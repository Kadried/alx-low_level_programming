#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints combinations of two-digit numbers
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			printf("%02d %02d", i, j);

			if (!(i == 9 && j == 9))
			{
				printf(", ");
			}
		}
	}

	putchar('\n');

	return (0);
}
