/* takes wind speed a provides description according to the Beaufort scale */

#include <stdio.h>

int main(void)
{
	float windspeed;

	printf("Enter a wind speed (mph): ");
	scanf("%f", &windspeed);

	if (windspeed < 1)
		printf("Calm\n");
	else if (windspeed >= 1 && windspeed < 4)
		printf("Light air\n");
	else if (windspeed >= 4 && windspeed < 28)
		printf("Breeze\n");
	else if (windspeed >= 28 && windspeed < 48)
		printf("Gale\n");
	else if (windspeed >= 48 && windspeed < 63)
		printf("Storm\n");
	else
		printf("Hurricane\n");

	return 0;
}
