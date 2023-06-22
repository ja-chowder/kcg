#include <stdbool.h>
#include <stdio.h>

int main(void)
{
	int digit;
	long n;
	int digcntArr[10];

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0)
	{
		digit = n % 10;
		digcntArr[digit]++;
		n /= 10;
	}

	printf("Digit:      ");
	for (int digit  = 0; digit < 10; digit++)
		printf("%3d", digit);

	printf("\nOccurrences:");
	for (int digit = 0; digit < 10; digit++)
		printf("%3d", digcntArr[digit]);
	printf("\n");

	return 0;
}

