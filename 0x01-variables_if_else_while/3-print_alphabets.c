#include <stdio.h>

/**
 *main - prints the alphabet in lowercase then uppercase
 *
 *return: Always 0 (SUCCESS)
 */ 
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);

for (letter + 'A'; letter <= 'Z'; letter++)
putchar(letter);

putchar('\n');
return (0);
}
