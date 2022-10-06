/*prints a 1 month calendar */

#include <stdio.h>

int main(void)
{
	int days_in_month;
	int day_of_week;

	printf("Enter number of days in month: ");
	scanf("%d", &days_in_month);

	printf("Enter starting day of the week (1=Sun, ... 7=Sat): ");
	scanf("%d", &day_of_week);

	for (int i = 1; i <= days_in_month; i++)
	{	
		if (i ==1)
		{
			switch (day_of_week)
			{
				case 1: 
					printf("%3d", i); 
					day_of_week++;
					break;
				case 2:
					printf("%6d", i);
					day_of_week++;
					break;
				case 3:
					printf("%9d", i);
					day_of_week++;
					break;
				case 4:
					printf("%12d", i);
					day_of_week++;
					break;
				case 5:
					printf("%15d", i);
					day_of_week++;
					break;
				case 6:
					printf("%18d", i);
					day_of_week++;
					break;
				case 7:
					printf("%21d\n", i);
					day_of_week = 1;
					break;
			}
		}
		else
		{
			printf("%3d", i);
		
			if ( day_of_week == 7)
			{
				printf("\n");
				day_of_week = 1;
			}
			else
				day_of_week++;
		}
	}

	printf("\n");
	return 0;
}
