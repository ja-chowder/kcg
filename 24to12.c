/* converts 24 hour time to 12 hour time */

#include <stdio.h>

int main(void)
{
	int hour, minute; 

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	printf("Equivalent 12-hour time: ");
	
	if (hour == 12)
		printf("12:%02d PM\n", minute);
	else if (hour == 24)
		printf("12:%02d AM\n", minute);
	else if (hour > 12 && hour <= 23)
		printf("%d:%02d PM\n", hour - 12, minute);
	else
		printf("%d:%02d AM\n", hour, minute);

	return 0;

}
