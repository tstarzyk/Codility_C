#pragma once
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

struct Results {
	int* A;
	int N;
};

struct Results CyclicRotationSolution(int* A, int N, int K);
