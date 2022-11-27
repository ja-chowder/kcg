#include <stdio.h>

int main(void)
{
	int x, y, z;

	printf("The value returnbed by the scanf() function is: %d\n", 
	scanf("%d%d%d", &x, &y, &z));

	printf("x is %d\n", x);
	printf("y is %d\n", y);
	printf("z is %d\n", z);

	return 0;
}
