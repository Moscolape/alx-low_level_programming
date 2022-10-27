#include "main.h"

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
int i;
unsigned int num;

num = 0;

if (!b)
return (0);

for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
}

for (i = 0; b[i] != '\0'; i++)
{
num <<= 1;
if (b[i] == '1')
num += 1;
}

return (num);
}
