#include <stdio.h>

#define NUM_QUIZZES 5
#define NUM_STUDENTS 5


int main(void) 
{
int grades[NUM_STUDENTS][NUM_QUIZZES];
int high, low, quiz, student, total;

	for (student = 0; student < NUM_STUDENTS; student++)
	{
		printf("Enter grades for student %d: ", student + 1);
		for (quiz = 0; quiz < NUM_QUIZZES; quiz++)
			scanf("%d", &grades[student][quiz]);
	}		

	return 0;
}
