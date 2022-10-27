#include "holberton.h"
#include <stdlib.h>

/**
 * binary_to_uint - Convert a string representing a binary number to an
 * unsigned int decimal value
 * @b: The string containing the binary
 *
 * Return: 0 if string contains something other than 1 or 0, or
 * if the string is NULL, return the decimal value on success
 */

unsigned int binary_to_uint(const char *b)

{
unsigned int i, len;
unsigned int decval;

unsigned int num = 0, mult = 1;
int len;

if (b == '\0')
return (0);

for (len = 0; b[len];)
len++;

for (len -= 1; len >= 0; len--)
{
if (b[len] != '0' && b[len] != '1')
return (0);

num += (b[len] - '0') * mult;
mult *= 2;
}

return(num)
}
