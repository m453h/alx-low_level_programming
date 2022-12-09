#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - generates a random number and prints its last variable
*
* Description: using the main function this program
* generates a random intenger n and display its last digit
* it includes a message that states whether the last digit
* is greater than 5 or less than 0 or 0
*
* Return: 0
*/
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (m < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	else if (m > 5)
		printf("Last digit of %d is %d and is greater than 5", n, m);

	return (0);
}
