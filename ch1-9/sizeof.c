#include <stdio.h>

int main(void)
{
	printf("int is %lu bytes\n", sizeof(int));
	printf("short is %lu bytes\n", sizeof(short));
	printf("long is %lu bytes\n", sizeof(long));
	printf("float is %lu bytes\n", sizeof(float));
	printf("double is %lu bytes\n", sizeof(double));
	printf("long double is %lu bytes\n", sizeof(long double));
	
	return 0;
}
