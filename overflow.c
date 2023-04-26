#include <stdio.h>
#include <cs50.c>

int main(void)
{
	// Integer overflow
	long a = get_long("a= ");
	long b = get_long("b= ");

	printf("a + b = %lld", a + b); // lld = long long decimal = 64bit
}