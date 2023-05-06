#include <cs50.h>
#include <stdio.h>

int main(void)
{
	// Integer numbers would overflow if user input numbers bigger than 2 000 000 000
	long a = get_long("a= ");
	long b = get_long("b= ");

	printf("a + b = %lld", a + b); // lld = long long decimal = 64bit
}