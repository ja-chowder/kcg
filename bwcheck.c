#include <stdio.h>

int check(int x, int y, int n);

int main(void)
{
	int a, b, top;
	printf("The range is 0 to x. enter a value for x:");
	scanf("%d", &top);
	printf("Enter 2 integers separated by a space:");
	scanf("%d %d", &a, &b);

	if (check(a, b, top))
		printf("The check function returned 1, so the numbers are between 0 and x - 1 inclusive.\n");
	else
		printf("The check function returned 0, so the numbers are not between 0 and x - 1 inclusive.\n");

	return 0;

}

int check(int x, int y, int n)
{
	/*initial attempt*/
	/*
	if (x >= 0 && y >= 0 && x <= n-1 && y <= n-1)
		return 1;
	else
		return 0;
	*/



	/*more concise version.
	conditional expressions includes in return statement. not separate 
	from return statement*/
	return (x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1);
}
