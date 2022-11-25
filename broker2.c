/* calculates a broker's commission */

#include <stdio.h>

int main(void)
{
	float tradeVal, commission;
	for (tradeVal = 1.0f; tradeVal > 0; )
	{
		printf("How much was the trade: ");
		scanf("%f", &tradeVal);
		
		if (tradeVal == 0)
			break;

		if (tradeVal < 2500.00f)
			commission = 30.00f + 0.017f * tradeVal;

		else if (tradeVal < 6250.00f)
			commission = 56.00f + 0.0066f * tradeVal;

		else if (tradeVal < 20000.00f)
			commission = 76.00f + 0.0034f * tradeVal;

		else if (tradeVal < 50000.00f)
			commission = 100.00f + 0.0022f * tradeVal;

		else if (tradeVal < 500000.00f)
			commission = 155.00f + 0.0011f * tradeVal;

		else
			commission = 255.00f + 0.0009f * tradeVal;

		if (commission < 39.00f)
			commission = 39.00f;

		printf("Commission: $%.2f\n", commission);
	}
	return 0;
}
