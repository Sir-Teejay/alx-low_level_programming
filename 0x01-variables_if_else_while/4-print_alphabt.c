#include <stdio.h>
/**
 * main - prints alphabets except q and e
 * putchar: print out text to the standard output
 * Return: 0 if well executed
 */
int main(void)
{
	int n = 97;

	for (n = 97; n < 123; n++)
	{
		if (n != 101 && n != 113)
		{
			putchar(n);
		}
	}
	printf("\n");
	return (0);
}
