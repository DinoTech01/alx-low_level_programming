#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	int i, n;

	for(i = 0, dest[i] != '\0', i++)
	for(n = 0, src[n] != '\0', n++)
	{
		dest[i + n] = src[n];
	}
	return (dest);
}
