#include "search_algos.h"

/**
 * recursive_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @l: left index
 * @r: right index
 * @value: value to search for
 * Return: first index where value is located, or -1 if not found
 */
int recursive_binary(int *array, size_t l, size_t r, int value)
{
	size_t mid, i;

	if (r >= l)
	{
		mid = l + (r - l) / 2;
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i == r)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		if (array[mid] == value && (mid == 0 || array[mid - 1] != value))
			return (mid);
		if (array[mid] >= value)
			return (recursive_binary(array, l, mid, value));
		return (recursive_binary(array, mid + 1, r, value));
	}
	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (recursive_binary(array, 0, size - 1, value));
}
