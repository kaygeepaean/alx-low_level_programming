#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints characters of the string at even indices
 * @str: the string to print
 * Return: void
 */
void puts2(char *str)
{
int z = 0;

while (str[z] != '\0')
{
if (z % 2 == 0)
{
putchar(str[z]);
}
z++;
}
putchar('\n');
}
