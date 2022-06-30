#include <stdio.h>
/**
 * main - size of various types
 * print the sizes in bytes of various types
 * Return: 0 as requuested
 */
int main(void)

{
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(float));
	return (0);

}
