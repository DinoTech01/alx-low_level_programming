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

	i = 0;
	while(dest[i] != '\0')
	{
		i++;
	}

	n = 0;
	while(src[n] != '\0')
	{
		dest[i + n] = src[n];
		n++;
	}
	return (dest);
}
