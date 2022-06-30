#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * array_range - creates an array of integers
 * @min: start of the array
 * @max: the maximum number of the array element
 * Return: a pointer to integer
 */
int *array_range(int min, int max)
{
	unsigned int len;
	int i, j = 0;
	int *p;

	len = max - min + 1;

	if (min > max)
		return (NULL);
	p = (int *)malloc(len * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		p[j] = i;
		j++;
	}
	return (p);
}
