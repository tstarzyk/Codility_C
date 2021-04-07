// SortAlgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdint.h>

#include "FrogRiverOne.h"
#include "CyclicRotation.h"
#include "MissingElement.h"
#include "FrogJmp.h"
#include "BinaryGap.h"
#include "OddNumber.h"

int main()
{
	struct Results result;
	int result3 = 0;
	int result4 = 0;
	int result5 = 0;
	int result6 = 0;
	int X = 3;
	int N = 7;

	int X1 = 10;
	int Y1 = 85;
	int D1 = 30;

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

	printf("\r\n");
	result4 = FrogJmp(X1, Y1, D1);
	printf("jumps %d \r\n", result4);

	printf("\r\n");
	result5 = BinaryGap(8);
	printf("binaryGap %d \r\n", result5);

	printf("\r\n");
	int A[4] = { 12, 12, 10, 10 };
	result6 = OddNumber(&A[0], 4);
	printf("oddNumber %d \r\n", result6);

	system("pause");
}
