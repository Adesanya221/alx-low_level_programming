#include <stdlib.h>
/**
 * _strlen - string length
 * @s: string in questions
 * Return: string length
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _strdup - returns a pointer to a space in memory containing
 * the string copy
 * @str: the string to be copied
 * Return: pointer to the allocated memory
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int size;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	size = _strlen(str) + 1;

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		s[i] = str[i];
		i++;
	}

	return (s);
}
