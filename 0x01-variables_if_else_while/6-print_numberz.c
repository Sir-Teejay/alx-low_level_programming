#include <stdio.h>
/**
 * main - print single digit numbers of base 10
 * putchar: prints a value in the standard output
 * Return: 0 if well executed
 */
int main(void)
{
	int n = '0';

	for (n = '0'; n < 10; n++)
	{
		putchar(n);
	}
	return (0);
}
