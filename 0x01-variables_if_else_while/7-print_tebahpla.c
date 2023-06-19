#include<stdio.h>
/**
*main - Entry point
*Description: 'alphabet in lowercase, and then in uppercase'
*Return:always 0
*/
int main(void)
{
int n = 122;

while (n >= 97)
{
putchar(n);
n--;
}
putchar('\n');
return (0);
}
