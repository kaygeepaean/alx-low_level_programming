#include <stdio.h>
void print_lines_before_main(void) __attribute__ ((constructor));
/**
*print_lines_before_main - Prints a sentence before the main function executed
*
*/
void print_lines_before_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
