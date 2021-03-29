#include "BinaryGap.h"

int BinaryGap(int N)
{
	int binary[32] = { 0 };
	uint8_t i = 0;
	int maxGap = 0;
	int currentGap = 0;
	bool start = false;
	while (N > 0)
	{
		binary[i] = N % 2;
		N /= 2;
		i++;
	}

	/*for (int j = i - 1; j >= 0; j--)
	{
		printf("%d", binary[j]);
	}
	printf("\r\n");*/

	for (int j = 0; j < 32; j++)
	{
		if (binary[j] == 1)
		{
			if (start)
			{
				maxGap = maxGap > currentGap ? maxGap : currentGap;
				currentGap = 0;
			}
			else
			{
				start = true;
			}
		}
		else if (binary[j] == 0)
		{
			if (start)
			{
				currentGap++;
			}
		}
	}
	return maxGap;
}