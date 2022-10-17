#include <stdio.h>
/**
	*main- serves as the entry point for the program
	*
	*Return: By default returns zero if no erros otherwise returns non-zero value
	*/
int main(void)
{
	printf("Size of a char:%c bytes(s)\n", sizeof(char));
	printf("Size of a int:%d bytes(s)\n", sizeof(int));
	printf("Size of a long int:%d bytes(s)\n", sizeof(long int));
	printf("Size of a long long int:%d bytes(s)\n", sizeof(long long int));
	printf("Size of a float:%5.2d bytes(s)\n", sizeof(float));
	return (0);
}
