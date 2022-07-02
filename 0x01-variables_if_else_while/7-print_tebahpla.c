#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - start program
 *
 * Return: 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch <= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
