#include "main.h"
#include <stdio.h>
#include "string.h"
/**
 * puts_half - print second half of the string
 *             if number of characters is odd, print last n characters
 * @str: string variable
 * Return: void
 */
void puts_half(char *str)
{
int len, i, half;

len = strlen(str);
half = len / 2;
if (len % 2 != 0)
{
half = ((len + 1) / 2);
}
for (i = half; i < len; i++)
{
putchar(str[i]);
}
putchar('\n');
}
