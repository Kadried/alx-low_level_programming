#include <stdio.h>

/**
 * main - contains the code function
 * @dest: input value
 * @src: input value
 * @n: number of bytes
 * Return: destination
 */
char *_strncpy(char *dest, const char *src, int n);

int main(void)
{
	char dest[50];
	const char src[] = "Copy this string";
	int n = 5;

	printf("Copied string: %s\n", _strncpy(dest, src, n));

	return (0);
}
