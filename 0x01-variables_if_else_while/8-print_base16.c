#include <stdio.h>
/**
 * main - prints hexadecimal numbers in lowercase
 * Return: 0 if well executed
 */
int main(void)
{
	int n = 0;

	for (n = 0; n < 16; n++)
	{
		printf("%x", n);
	}
	printf("\n");
	return (0);
}
