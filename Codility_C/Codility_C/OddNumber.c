#include "OddNumber.h"

int OddNumber(int* A, int N)
{
	int oddNumber = 0;
	int tempRes = 0;
	for (int ii = 0; ii < N; ii++)
	{
		tempRes ^= A[ii];
	}
	oddNumber = tempRes;
	return oddNumber;
}