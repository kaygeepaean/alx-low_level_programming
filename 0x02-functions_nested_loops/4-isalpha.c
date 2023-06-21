#include "main.h"
/**
*_isalpha - check for alphabetic character
*@c: The character to be checked
*Return: 1 for lowercase character. 0 for the rest.
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 9)) 
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
