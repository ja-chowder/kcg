#include <stdio.h>

int main(void)
{
	char ch = 0;
	int len = 0;

	printf("Enter a message: ");
	ch = getchar();

	while (ch != '\n')
	{
		len++;
		ch = getchar();
	}

	printf("Your message was %d characters long. \n", len);

	return 0;
}
