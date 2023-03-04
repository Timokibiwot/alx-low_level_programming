#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @src: source string
 * @dest: destination string
 * The function appends src to dest
 * Return: pointer to the resulting dest string
 */

char *_strcat(char *dest, char *src)
{
	char *ans = dest;
	int j = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (*ans);
}
