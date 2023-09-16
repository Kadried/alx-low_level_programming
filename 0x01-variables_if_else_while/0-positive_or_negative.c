#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Determine if a randon number is positice, negative or zero
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else if (n > 0)
	{
		printf("%d is %s\n", n, "positice");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}

