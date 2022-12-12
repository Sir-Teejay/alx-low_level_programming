#include <stdio.h>
/**
 * main - print single digit numbers
 * Return: 0 if executed well
 */
int main(void)
{
	int n = 0;
	int m;

	for (n = 0, m = ','; n < 10; n++)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(m);
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
