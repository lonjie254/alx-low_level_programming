#include "main.h"
#include "string.h"
#include <unistd.h>

/**
 * _puts - print a string followed by a new line to stdout
 * @str: a string variable to print
 * Return: void
 */
void _puts(char *str)
{
int len;
char s;

s = '\n';
len = strlen(str);
write(1, str, len);
write(1, &s, 1);
}
