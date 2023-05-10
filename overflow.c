#include <cs50.h>
#include <stdio.h>

int main(void)
{
	// Overflow if user input numbers bigger than 128
	unsigned char x = get_int("x= ");
	unsigned char y = get_int("y= ");

	unsigned char z = x + y; // unsigned char is 1 byte = 0..255

	printf("x + y = %i", z);
}