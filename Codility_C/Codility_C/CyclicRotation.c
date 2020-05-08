#include "CyclicRotation.h"

static void copy_memory(void* dst, void* src, int size);

int CyclicRotationSolution(int* A, int N, int K)
{
	int rot = 0;
	int temp = 0;
	if (K >= N)
	{
		temp = K / N;
		rot = K - temp * N;
	}
	else
	{
		rot = K;
	}
	printf("\r\nBefore: ");
	for (int i = 0; i < N; i++)
	{
		printf("%d - ", A[i]);
	}
	printf("\r\n");
	printf("K = %d", rot);
	int* cutright = (int*)malloc(rot * sizeof(int));
	int* cutleft = (int*)malloc((N - rot) * sizeof(int));
	int* table = (int*)malloc(N * sizeof(int));

	copy_memory(cutright, &A[N - rot], rot * sizeof(int));
	copy_memory(&cutleft[0], &A[0], (N - rot)*sizeof(int));
	copy_memory(table, cutright, rot*sizeof(int));
	copy_memory(table+rot, cutleft, (N-rot)*sizeof(int));

	printf("\r\nAfter: ");
	for (int i = 0; i < N; i++)
	{
		printf("%d - ", table[i]);
	}
	
	free(cutleft);
	free(cutright);
	free(table);

	return 1;
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