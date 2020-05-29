#include "FrogRiverOne.h"

int FrogRiverOneSolution(int X, int A[], int N)
{
	int* status;
	if (N == 1) 
	{
		if (A[0] == X) 
		{
			return 0;
		}
		else 
		{
			return -1;
		}
	}
	for (int k = 0; k < N; k++)
	{
		printf("%d, ", A[k]);
	}
	printf("\r\n");

	status = (int*)calloc(X, sizeof(int));
	int cnt = 0;
	for (int i = 0; i < N; i++) 
	{
		printf("A[i] %d \r\n", A[i]);
		if (status[A[i] - 1] == 0) 
		{
			printf("status[A[i]] %d \r\n", status[A[i]]);
			printf("status[A[i] - 1] %d\r\n", status[A[i] - 1]);
			cnt++;
			status[A[i] - 1] = 1;
		}
		if (i >= X - 1) 
		{
			if (cnt == X) 
			{
				return i;
			}
		}
	}
	return -1;
}