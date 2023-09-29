#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main block
 * Description: program assigns random number to variable n and 
 * checks for last digit
 * Return: always 0
 */ 
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10; /* gives last digit of n*/
	
	if (m > 5)
	    printf("Last digit of %d is %d and is greater than 5\n", n, m);
	else if (m == 0)
	    printf("Last digit of %d is %d and is 0\n", n, m);
	else 
	    printf("Last digit of %d is %d and is less than 6 and not zero\n", n, m);
	return (0);
}
