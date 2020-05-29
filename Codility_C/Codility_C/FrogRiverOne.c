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

	status = (int*)calloc(X, sizeof(int));
	int cnt = 0;
	for (int i = 0; i < N; i++) 
	{
		if (status[A[i] - 1] == 0) 
		{
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