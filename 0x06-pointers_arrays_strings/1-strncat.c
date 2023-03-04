#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: Maximum number of bytes to be used from src.
 *
 * Return: Pointer to resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;

	/* Find length of dest string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append n characters from src to dest */
	for (int i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/* Add null terminator to resulting string */
	dest[dest_len + n] = '\0';

	return dest;
}
