/* reads a word, calculates its value per the IEEE scrabble standard */

#include <stdio.h>
#include <ctype.h>
	/* toupper is used */

int main(void)
{
	char ch;
	int val = 0;

	printf("Enter a word: ");
	
	ch = getchar();
	while (ch != '\n')
	{
		ch = toupper(ch);
		switch (ch)
		{
			case 'Q': val += 10; break;
			case 'Z': val += 10; break;

			case 'J': val += 8; break;
			case 'X': val += 8; break;

			case 'K': val += 5; break;
			
			case 'F': val += 4; break;
			case 'H': val += 4; break;
			case 'V': val += 4; break;
			case 'W': val += 4; break;
			case 'Y': val += 4; break;

			case 'B': val += 3; break;
			case 'C': val += 3; break;
			case 'M': val += 3; break;
			case 'P': val += 3; break;

			case 'D': val += 2; break;
			case 'G': val += 2; break;

			default: val += 1; break;
		}
		ch = getchar();
	}

	printf("Scrabble value: %d\n", val);

	return 0;
}
