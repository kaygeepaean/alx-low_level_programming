#include "main.h"
/**
*_isupper - shows 1 if the input is a
*UPPERCASE character. Another cases, shows
*0
*@c: The character to be checked.
*
*Return: 1 for UPPERCASE character. 0 for the rest.
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
