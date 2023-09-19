#include <stdio.h>
#include <string.h>

#define LEN 10

void _memset(char *s, char c, int len);

char *_strcpy(char *dest, char *src);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char cpy[LEN + 1] = {0};
	char *str;
	char *ret;

	memset(cpy, 'H', LEN);
	str = "Holberton!";
	ret = strcpy(cpy, str);
	printf("%s\n%s\n%s\n", str, cpy, ret);
	return (0);
}
