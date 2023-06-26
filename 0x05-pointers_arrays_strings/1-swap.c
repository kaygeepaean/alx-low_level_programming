#include "main.h"
#include <stdio.h>

/**
* swap_int - takes in two variables and swaps their values
* @a: pointer to the first variable
* @b: pointer to the second variable
* Return: void
*/
void swap_int(int *a, int *b)
{
int change = *b;
*b = *a;
*a = change;
}
