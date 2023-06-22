#include <stdio.h>

int day_of_year(month, day, year);

int main(void)
{
}

int day_of_year(int month, int day, int year)
{
	int	days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 32};
	int doy;

	/*add the days from the previous month*/
	for (int i = 0; i < month - 1; i++)
		doy += days_in_month[i];
	
	/*add the days from the current month*/
	doy += day;

	/*add one for leap years*/
	if (year % 4 == 0)
		doy++;

	return doy;

}
