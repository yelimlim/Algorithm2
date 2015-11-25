// algorithm_151015.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Struct.h"
#include "Example.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "FindMaximumSubArray.h"
#include "windows.h"
#include "HeapSort.h"

void InsertionSortExample()
{
    //InsertionSort
    printf("<Insertion Sort>\n");

    printf("element 0\n");
    int* nullArr = GetIntArrRandom(0);
    printf("- before : ");
    PrintIntArr(nullArr, 0);
    printf("- after : ");
    InsertionSort(nullArr, 0);
    PrintIntArr(nullArr, 0);
    printf("- IsCorrect : ");
    IsIncrease(nullArr, 0);
    printf("\n");

    printf("element 1\n");
    int* one = GetIntArrRandom(1);
    printf("- before : ");
    PrintIntArr(one, 1);
    printf("- after : ");
    InsertionSort(one, 1);
    PrintIntArr(one, 1);
    printf("- IsCorrect : ");
    IsIncrease(one, 1);
    printf("\n");

    printf("element 2\n");
    int* two = GetIntArrRandom(2);
    printf("- before : ");
    PrintIntArr(two, 2);
    printf("- after : ");
    InsertionSort(two, 2);
    PrintIntArr(two, 2);
    printf("- IsCorrect : ");
    IsIncrease(two, 2);
    printf("\n");

    printf("Increse\n");
    int* increse = GetIntArrIncrese(20);
    printf("- before : ");
    PrintIntArr(increse, 20);
    printf("- after : ");
    InsertionSort(increse, 20);
    PrintIntArr(increse, 20);
    printf("- IsCorrect : ");
    IsIncrease(increse, 20);
    printf("\n");

    printf("Decrese\n");
    int* decrese = GetIntArrDecrese(20);
    printf("- before : ");
    PrintIntArr(decrese, 20);
    printf("- after : ");
    InsertionSort(decrese, 20);
    PrintIntArr(decrese, 20);
    printf("- IsCorrect : ");
    IsIncrease(decrese, 20);
    printf("\n");

    printf("Random\n");
    int* random = GetIntArrRandom(20);
    printf("- before : ");
    PrintIntArr(random, 20);
    printf("- after : ");
    InsertionSort(random, 20);
    PrintIntArr(random, 20);
    printf("- IsCorrect : ");
    IsIncrease(random, 20);
    printf("\n");

    printf("Same\n");
    int* same = GetIntArrSame(20);
    printf("- before : ");
    PrintIntArr(same, 20);
    printf("- after : ");
    InsertionSort(same, 20);
    PrintIntArr(same, 20);
    printf("- IsCorrect : ");
    IsIncrease(same, 20);
    printf("\n");
}

void MergeSortExample()
{
	//MergeSort
	printf("<Merge Sort>\n");

	printf("element 0\n");
	int* nullArr = GetIntArrRandom(0);
	printf("- before : ");
	PrintIntArr(nullArr, 0);
	printf("- after : ");
	MergeSort(nullArr, 0, 0);
	PrintIntArr(nullArr, 0);
	printf("- IsCorrect : ");
	IsIncrease(nullArr, 0);
	printf("\n");

	printf("element 1\n");
	int* one = GetIntArrRandom(1);
	printf("- before : ");
	PrintIntArr(one, 1);
	printf("- after : ");
	MergeSort(one, 0, 0);
	PrintIntArr(one, 1);
	printf("- IsCorrect : ");
	IsIncrease(one, 1);
	printf("\n");

	printf("element 2\n");
	int* two = GetIntArrRandom(2);
	printf("- before : ");
	PrintIntArr(two, 2);
	printf("- after : ");
	MergeSort(two, 0, 1);
	PrintIntArr(two, 2);
	printf("- IsCorrect : ");
	IsIncrease(two, 2);
	printf("\n");

	printf("Increse\n");
	int* increse = GetIntArrIncrese(20);
	printf("- before : ");
	PrintIntArr(increse, 20);
	printf("- after : ");
	MergeSort(increse, 0, 19);
	PrintIntArr(increse, 20);
	printf("- IsCorrect : ");
	IsIncrease(increse, 20);
	printf("\n");

	printf("Decrese\n");
	int* decrese = GetIntArrDecrese(20);
	printf("- before : ");
	PrintIntArr(decrese, 20);
	printf("- after : ");
	MergeSort(decrese, 0, 19);
	PrintIntArr(decrese, 20);
	printf("- IsCorrect : ");
	IsIncrease(decrese, 20);
	printf("\n");

	printf("Random\n");
	int* random = GetIntArrRandom(20);
	printf("- before : ");
	PrintIntArr(random, 20);
	printf("- after : ");
	MergeSort(random, 0, 19);
	PrintIntArr(random, 20);
	printf("- IsCorrect : ");
	IsIncrease(random, 20);
	printf("\n");

	printf("Same\n");
	int* same = GetIntArrSame(20);
	printf("- before : ");
	PrintIntArr(same, 20);
	printf("- after : ");
	MergeSort(same, 0, 19);
	PrintIntArr(same, 20);
	printf("- IsCorrect : ");
	IsIncrease(same, 20);
	printf("\n");
}

void MaximumSubArray()
{
	//MaximumSubArray
	printf("<MaximumSubArray>\n");

	printf("element 0\n");
	int* nullArr = GetIntArrRandom(0);
	printf("- array : ");
	PrintIntArr(nullArr, 0);
	Info* nullInfo = FindMaximumSubArrayN2(nullArr, 0);
	printf("- n^2 result : ");
	PrintIntArr(nullArr, nullInfo->s, nullInfo->e);
	delete nullInfo;
	nullInfo = FindMaximumSubArrayDivide(nullArr, 0, 0);
	printf("- divide result : ");
	PrintIntArr(nullArr, nullInfo->s, nullInfo->e);
	printf("\n");

	printf("element 1\n");
	int* one = GetIntArrRandom(1);
	printf("- array : ");
	PrintIntArr(one, 1);
	printf("- n^2 result : ");
	Info* oneInfo = FindMaximumSubArrayN2(one, 1);
	PrintIntArr(one, oneInfo->s, oneInfo->e);
	delete oneInfo;
	oneInfo = FindMaximumSubArrayDivide(one, 0, 0);
	printf("- divide result : ");
	PrintIntArr(one, oneInfo->s, oneInfo->e);
	printf("\n");

	printf("element 2\n");
	int* two = GetIntArrRandom(2);
	printf("- array : ");
	PrintIntArr(two, 2);
	Info* twoInfo = FindMaximumSubArrayN2(two, 2);
	printf("- n^2 result : ");
	PrintIntArr(two, twoInfo->s, twoInfo->e);
	delete twoInfo;
	twoInfo = FindMaximumSubArrayDivide(two, 0, 1);
	printf("- divide result : ");
	PrintIntArr(two, twoInfo->s, twoInfo->e);
	printf("\n");

	printf("element 4\n");
	int* four = GetIntArrRandom(4);
	printf("- array : ");
	PrintIntArr(four, 4);
	Info* fourInfo = FindMaximumSubArrayN2(four, 4);
	printf("- n^2 result : ");
	PrintIntArr(four, fourInfo->s, fourInfo->e);
	delete fourInfo;
	fourInfo = FindMaximumSubArrayDivide(four, 0, 3);
	printf("- divide result : ");
	PrintIntArr(four, fourInfo->s, fourInfo->e);
	printf("\n");

	printf("Random\n");
	int* random = GetIntArrRandom(20);
	printf("- array : ");
	PrintIntArr(random, 20);
	Info* randomInfo = FindMaximumSubArrayN2(random, 20);
	printf("- n^2 result : ");
	PrintIntArr(random, randomInfo->s, randomInfo->e);
	delete randomInfo;
	randomInfo = FindMaximumSubArrayDivide(random, 0, 19);
	printf("- divide result : ");
	PrintIntArr(random, randomInfo->s, randomInfo->e);

	printf("\n");
}

using namespace System;

int _tmain(int argc, _TCHAR* argv[])
{
	Console::SetWindowSize(Console::WindowWidth * 2, Console::WindowHeight);
	
	printf("<HeapSort>\n");
	
	printf("- before\n");
	int* arr = GetIntArrRandom(20);
	Heap* heap = MakeHeap(arr, 20);
	PrintHeap(heap);

	printf("- after\n");
	HeapSort(arr, 20);
	Heap* heap2 = MakeHeap(arr, 20);
	PrintHeap(heap2);

    getchar();
}

