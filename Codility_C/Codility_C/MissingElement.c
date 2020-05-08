#include "MissingElement.h"

static void copy_memory(void* dst, void* src, int size);

int FindMisiingElementSolution(int* A, int N)
{
	int missingElement = 0;
	int expectedSum = 0;
	int elementsSum = 0;

	N = N + 1;
	expectedSum = (N * (N + 1) / 2);;

	printf("\r\n");
	for (int i = 0; i < N-1; i++)
	{
		elementsSum = A[i] + elementsSum;
	}
	missingElement = expectedSum - elementsSum;

	printf("Missing element is: %d\r\n ", missingElement);
	return missingElement;
}

static void copy_memory(void* dst, void* src, int size)
{
	char* cdst = (char*)dst;
	char* csrc = (char*)src;
	for (int i = 0; i < size; i++)
	{
		cdst[i] = csrc[i];
	}
}