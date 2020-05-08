// SortAlgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdint.h>

#include "CyclicRotation.h"
#include "MissingElement.h"


int main()
{
	int tab1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int tab2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 11 };

	for (int i = 0; i < 10; i++)
	{
		tab1[i] = i;
	}
	CyclicRotationSolution(&tab1[0], 10, 13);

	FindMisiingElementSolution(&tab2[0], 10);

	system("pause");
}
