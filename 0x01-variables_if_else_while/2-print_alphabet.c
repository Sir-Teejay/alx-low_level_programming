#include <stdio.h>

/**
	* main - prints all alphabets in small letters
	* putchar: inputs all characters from a to z
	* Return: returns 0
	*/
int main(void)
{
	int n = 97;

	for (n = 97; n < 123; n++)
		putchar(n);
	printf("\n");
	return (0);
}
