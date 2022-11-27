/*code to test some gcc behavior*/
#include <stdio.h>

/*return statement intentionally omitted in add2num function*/
int add2num(int a, int b)
{
	int sum = a + b;

}

int main(void)
{
	int x, y;
	printf("Enter 2 integrs separated by a space: ");
	scanf("%d %d", &x, &y);

	printf("Number sum: %d\n", add2num(x, y));
	return 0;
}
