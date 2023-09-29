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
	char alphabet2;
	for (alphabet2 = 'A'; alphabet2 <='Z'; alphabet2++)
	{
	    putchar(alphabet2);
	}
	putchar('\n');
	return (0);
}
