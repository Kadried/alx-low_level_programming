#include "main.h"
#include <stdio.h>
/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 * Return: The difference between the ASCII values
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (0);
}

/**
 * main - code function
 * Return: Always 0.
 */
int main(void)
{
	char str1[] = "Hello";
	char str2[] = "World";

	int result = _strcmp(str1, str2);

	if (result == 0)
		printf("Both strings are equal.\n");
	else if (result < 0)
		printf("str1 is less than str2.\n");
	else
		printf("str1 is greater than str2.\n");

	return (0);
}
