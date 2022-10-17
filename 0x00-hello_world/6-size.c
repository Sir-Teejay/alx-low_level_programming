#include <stdio.h>
/**
	*main- serves as the entry point for the program
	*
	*Return: By default returns zero if no erros otherwise returns non-zero value
	*/
int main(void)
{
	printf("Size of a char: %C byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
