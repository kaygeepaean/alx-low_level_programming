#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string
 * Return: void
 */
void puts_half(char *str)
{
int length = 0;
int start;

while (str[length] != '\0')
length++;

start = length / 2;
if (length % 2 != 0)
start++;

while (str[start] != '\0')
{
putchar(str[start]);
start++;
}
putchar('\n');
}
