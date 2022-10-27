#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */

void print_binary(unsigned long int n)

{
unsigned long int revnum;
unsigned long int count;

revnum = count = 0;
if (n == 0)
_putchar('0');

while (n > 0)
{
revnum = revnum << 1;
revnum += n & 1;
count++;
n = n >> 1;
}

while (revnum > 0)
{
_putchar((revnum & 1) + '0');
revnum = revnum >> 1;
count--;
}

if (count > 0)
{
while (count != 0)
{
_putchar('0');
count--;
}
}

}
