// SortAlgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdint.h>

#include "FrogRiverOne.h"
#include "CyclicRotation.h"
#include "MissingElement.h"


int main()
{
	struct Results result;
	int result3 = 0;
	int X = 3;
	int N = 7;

	int tab1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int tab2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 11 };
	int tab3[] = { 1, 3, 1, 3, 2, 1, 3 };

	for (int i = 0; i < 10; i++)
	{
		tab1[i] = i;
	}
	result = CyclicRotationSolution(&tab1[0], 10, 13);

	printf("\r\n");
	for (int i = 0; i < result.N; i++)
	{
		printf("%d - ", result.A[i]);
	}
	printf("\r\n");
	FindMisiingElementSolution(&tab2[0], 10);

	printf("\r\n");
	result3 = FrogRiverOneSolution(X, tab3, N);
	printf("leaves: %d \r\n", result3);

	system("pause");
}
