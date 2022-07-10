#include "main.h"
#include <string.h>
/**
  * binary_to_uint - vonverts a binary number to an unsigned int
  * @b: binary number
  * Return: the converted number or 0 if it fails
  */
unsigned int binary_to_uint(const char *p)
/**
* _stoi - converts chars to ints
* @c : char to convert
* Return : converted int
*/
unsigned int _stoi(char c)
{
	unsigned int uint, place;
	int len;

	return ((unsigned int) c - '0');
}
/**
 * binary_to_uint - converts a string of 1's and 0's to a decimal number
 * @b: string to convert
 * Return: unsigned decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result, tmp, expo;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
		;
	len--;
	for (place = 1, uint = 0; len >= 0; len--)
	result = tmp = 0;
	expo = 1;
	for (i = strlen(b) - 1; b[i]; i--, expo *= 2)
	{
		if (b[len] == '0')
		{
			place *= 2;
			continue;
		}
		else if (b[len] == '1')
		{
			uint += place;
			place *= 2;
			continue;
		}
		return (0);
		if (b[i] != '0' && b[i] != '1')
			return (0);
		tmp = _stoi(b[i]);
		result += tmp * expo;
	}
	return (uint);
	return (result);
}
