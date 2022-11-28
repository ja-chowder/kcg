/* testing usage of a non void function that has an empty return value
   to see what gcc will do*/

#include <stdio.h>

int print_int(int i);

int main(void)
{
	int a = -1;

	/*attempting to use function in an expression*/
	int b = a + print_int(a);

	/*attempting to use function in an assigment*/
	int c = print_int(a);
	
	return 0;
}

int print_int(int i)
{
	if (i < 0) {
		printf("i is less than 0, returning nothing.\n");
		return;
	}

	printf("%d", i);
	return 1;
}
