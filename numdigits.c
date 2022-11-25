/* reads a user inputted integer. outputs number of digits of the input */

#include <stdio.h>

int main(void)
{
	int  digits = 0, input;
	printf("Enter a nonnegative integer: ");
	scanf("%d", &input);

	do
	{
		input /= 10;
		digits++;
	}	while (input > 0);

	printf("The number has %d digits.\n", digits);

	return 0;
}
