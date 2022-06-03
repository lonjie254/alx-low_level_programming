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
int x = 'A';
while (x <= 'Z')
{
putchar(tolower(x));
x++;
}
return (0);
}
