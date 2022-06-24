#include "main.h"
#include "string.h"
/**
 * _strcat - contactinate two strings
 * @dest: the first string
 * @src: the second string
 * Return: a string that concatenated
 */
char *_strcat(char *dest, char *src)
{
	int lonjie1, lonjie2, y;

	lonjie1 = strlen(dest);
	lonjie2 = strlen(src);

	for (y = 0; y < lonjie2 && src[y] != '\0'; y++)
	{
		dest[lonjie1 + 1] = src[y];
	}
	dest[lonjie1 + 1] = '\0';
	return (dest);
}
