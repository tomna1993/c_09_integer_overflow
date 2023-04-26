#include <stdio.h>
#include <cs50.c>

int main(void)
{
	// Integer overflow
	int a = get_int("a= ");
	int b = get_int("b= ");

	printf("a + b = %i", a + b);
}