/*Prints a table of squares using a for statement */

#include <stdio.h>

int main(void)
{
	int i, n;

	printf("This program prints a table of sqaures. \n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	getchar();

	for (i = 1; i <= n; i++)
	{
		printf("%10d%10d\n", i, i * i);

		if (i % 25 == 0)
		{	

			printf("Press Enter to continue... \n");
			while (getchar() != '\n')
			;
		}
	}


	return 0;
}
