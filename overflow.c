#include <cs50.h>
#include <stdio.h>

int main(void)
{
	// Integer numbers would overflow if user input numbers bigger than 2 000 000 000
	// int a = get_int("a= ");
	// int b = get_int("b= ");

	// printf("a + b = %i", a + b); // i = 32bit = -2 147 483 648 to 2 147 483 647

	long a = get_long("a= ");
	long b = get_long("b= ");

	printf("a + b = %lld", a + b); // lld = long long decimal = 64bit = -9 223 372 036 854 775 807 to 9 223 372 036 854 775 806
}