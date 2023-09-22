#include "main.h"
#include <stdio.h>

/**
 * main - code function
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Hello, world!";

	printf("Modified string: %s\n", str);

	string_toupper(str);

	printf("Modified string: %s\n", str);

	return (0);
}
