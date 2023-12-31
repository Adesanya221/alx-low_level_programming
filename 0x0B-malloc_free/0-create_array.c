#include <stdlib.h>

/**
 * create_array - allocates n bytes in memory
 * @size: the number of chars to store
 * @c: the char to insert
 * Return: pointer to the allocated memory
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int idx;

	if (size == 0)
		return (0);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (0);

	idx = 0;
	while (idx < size)
	{
		arr[idx] = c;
		idx++;
	}
	return (arr);
}

