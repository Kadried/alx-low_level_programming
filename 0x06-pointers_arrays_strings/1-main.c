#include <stdio.h>

/**
 * main - function of the code
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: Always 0.
 */
char *_strncat(char *dest, const char *src, int n);

int main(void)
{
	char dest[50] = "Hello, ";
	char src[] = "world!";
	int n = 4;

	printf("Concatenated string: %s\n", _strncat(dest, src, n));

	return (0);
}
