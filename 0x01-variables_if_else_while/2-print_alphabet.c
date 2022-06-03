#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <ctype.h>

/**
 *main - entry point
 *
 *description - A-Z characters in lowercase
 *
 *Return: Always 0 (SUCCESS)
 */
int main(void)
{
for (int x = 'A'; x <= 'Z'; x++)
{
int lower_x = tolower(x);
putchar(lower_x);
}
return (0);
}
