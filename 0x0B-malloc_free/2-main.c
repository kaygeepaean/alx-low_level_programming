#include <stdio.h>
#include <stdlib.h>

/**
* main - check the code for ALX School students.
*
* Return: Always 0.
*/
int main(void)
{
char *s;

s = str_concat("Betty ", "Holberton");
if (s == NULL)
{
printf("failed\n");
return (1);
}
printf("%s\n", s);
free(s);
return (0);
}
/**
* str_concat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
*
* Return: A pointer to the concatenated string, or NULL on failure.
*/
char *str_concat(const char *s1, const char *s2)
{
/* Implementation of str_concat function */
/* ... */
/* ... */
/* Return the concatenated string */
}
