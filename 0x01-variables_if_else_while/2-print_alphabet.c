#include <stdio.h>

/**
 * main - Prints the letters of the alphabet to lowercase
 *
 * Return: Always 0.
 */

int main(void)

{

char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
putchar('\n');

return (0);

}
