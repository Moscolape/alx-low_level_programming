/**
 * main - Print all single digits starting from 0, using putchar and no char
 */

#include <stdio.h>

/**
 * Return: Always 0.
 */

int main(void)
{
int num;

for (num = 0; num < 10; num++)
{
putchar((num % 10) + '0');
}

putchar('\n');

return (0);
}
