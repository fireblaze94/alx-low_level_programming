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
	int i;
	char ch;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
