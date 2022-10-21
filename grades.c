#include <stdio.h>

int main(void)
{
	float grades[5][5];
	float total = 0.0f, high = 0.0f, low=0.0f;
	int i, j;

	printf("Enter the 5 quiz grades for each student\n");
	for (int i = 0; i < 5; i++);
	{
		printf("Student %d: ", i + 1);
		for (int j = 0; j < 5; j++)
			scanf("%f", &grades[i][j]);
	}

	/*
	for (int j = 0; j < 5; j++)
	{
		printf("Quiz %d\n", j + 1);
		
		for (int i = 0; i < 5; i++)
		{
			total += grades[i][j];
			
			if (grades[i][j] < low)
				low = grades[i][j];

			if (grades[i][j] > high)
				high = grades[i][j];
		}

		printf("Average score: %.1f\n", total / 5.0f);
		printf("High score: %.1f\n", high);
		printf("Low score: %.1f\n", low);
	}
	
	for (int i = 0; i < 5; i++)
	{
		printf("\nStudent %d: \n", i + 1);
		
		for (int j = 0; j < 5; j++)
		{
			total += grades[i][j];
		}
		
		printf("Total score: %.1f\n", total);
		printf("Average score: %.1f\n", total / 5.0f);
		total = 0.0f;
	}
	*/

	return 0;

}

