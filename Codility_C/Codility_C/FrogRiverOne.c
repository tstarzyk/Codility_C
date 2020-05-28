#include "FrogRiverOne.h"

int FrogRiverOneSolution(int X, int A[], int N)
{
	bool* statusIndex = (bool*)malloc(N * sizeof(bool));
	int tmpCnt = 0;

	if (N > 100000)
	{
		return -1;
	}
	if (X > 100000)
	{
		return -1;
	}


	for (int ii = 0; ii < N; ii++)
	{
		statusIndex[A[ii] - 1] = true;
		if (A[ii] == X)
		{
			break;
		}
		tmpCnt++;
	}
	
	for (int ii = 0; ii < X; ii++)
	{
		if (statusIndex[ii] != true)
		{
			return -1;
		}
	}

	return tmpCnt;
}