#include "holberton.h"
#define NULL 0

/**
 * _strchr - locate 1st occurrence of char in string and returns pointer to it
 * @s: string to search
 * @c: characer to find
 * Return: pointer to the character found in string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c) /* find match */
		i++;

	if (s[i] == c) /* if a match is found, assign to address */
		return (&s[i]);
	else
		return (NULL);
}
