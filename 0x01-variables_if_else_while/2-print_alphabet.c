#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 *
 * followed by a new line2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putcher(ch);
		ch++;
	}
	putcher('\n');

	return (0);
}
