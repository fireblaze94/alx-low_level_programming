#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - start point
 * print alphabets with space
 * Return: 0 (success)
 */
int main(void)
{
	char smallChar;
	for (smallChar = 'a'; smallChar <= 'z'; smallChar++)
	{
		putchar(smallChar);
		putchar('\n');
	}
	return (0);
}
