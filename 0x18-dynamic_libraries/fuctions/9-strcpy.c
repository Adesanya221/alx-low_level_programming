#include "main.h"

/**
 * _strcpy - copies the str
 * @src: pointer var
 * @dest: pointer var
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		*(dest + j) = *(src + j);
	}

	return (dest);
}
