/* converts number grade to letter grade */

#include <stdio.h>

int main(void)
{
	int grade, tens;

	printf("Enter a number grade: ");
	scanf("%d", &grade);

	tens = grade / 10;
	
	printf("Letter grade: ");
	switch (tens) 
	{
		case 10: printf("A\n"); break;
		case 9:	 printf("A\n"); break;
		case 8:  printf("B\n"); break;
		case 7:  printf("C\n"); break;
		case 6:  printf("D\n"); break;
		default: printf("F\n");
	}

	return 0;
}
