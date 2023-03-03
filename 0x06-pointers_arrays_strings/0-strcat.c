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

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (ans);
}
