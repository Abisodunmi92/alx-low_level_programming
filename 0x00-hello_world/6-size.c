#include <stdio.h>
/**
 * main - A program that prints the size of various computer types.
 *
 * Return: 0 on success
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float f;

prinf("size of the char; %lu byte(s)\n", (unsigned long)sizeof(a));
prinf("size of an int; %lu byte(s)\n", (unsigned long)sizeof(b));
prinf("size of long int; %lu byte(s)\n", (unsigned long)sizeof(c));
prinf("size of long long; %lu byte(s)\n", (unsigned long)sizeof(d));
prinf("size of float; %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
