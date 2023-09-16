#include "main.h"

/**
 * _isdigit - checks the code for a digit
 * @c:The character to bs checked
 * Return: 1 for digit chara ter or 0 for anything else
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
