#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: the char
 * Return: if c is a letter, 1, else, 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
