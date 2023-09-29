#include <stdio.h>

/**
 * main - main block
 * Description: program prints alphabet in lower case
 * followed by a new
 * Return: Always 0.
 */ 
int main(void)
{
	char alphabet;
	for (alphabet = 'a'; alphabet <='z'; alphabet++)
	{
	    putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
