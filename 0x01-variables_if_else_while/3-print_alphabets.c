#include <stdio.h>
/**
 * main - prints alphabets in both upper and lower case
 * putchar: outputs all charaters from A through z
 * Return: returns 0 if well executed
 */
int main(void)
{
	int n = 97;
	int m = 65;

	for (n = 97; n < 123; n++)
	{
		putchar(n);
	}
	for (m = 65; m < 91; m++)
	{
		putchar(m);
	}
	printf("\n");
	return (0);
}
