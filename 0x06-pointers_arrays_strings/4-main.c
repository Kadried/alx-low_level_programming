#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}

/**
 * main - code function
 * Return: numbers of arrays
 */
int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	int i;

	printf("Original array: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	reverse_array(arr, n);

	printf("Reversed array: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return (0);
}
