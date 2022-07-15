#include "main.h"

/**
 * strcat - Concatenates the string pointed to by @src, includes the terminate
 * null byte, to the end of the string pointed to by @dest
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest
 *Return: A pointer to the destination string @dest
 */
char *strcat(char *dest, const char *src)
{

	int i = 0;

	int j = 0;



	while (dest[i] != '\0')

	{

		i++;

	}

	for (j = 0; src[j] != '\0'; j++)

	{

		dest[i + j] = src[j];

	}

	return (dest);

}
