#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - generate a random number and display if it is -ve or +ve
*
* Description: using the main function
* this program randomly generates a number and checks if the number
* is positive or negative and display the results to the user
*
* Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("0 is zero\n");

	return (0);
}
