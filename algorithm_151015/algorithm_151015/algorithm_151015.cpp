// algorithm_151015.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "Example.h"
#include "InsertionSort.h"

void PrintIntArr(int* arr, int num)
{
    if (arr == nullptr)
    {
        printf("null");
        printf("\n");
        return;
    }

    for (int i = 0; i < num; ++i)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int _tmain(int argc, _TCHAR* argv[])
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
    printf("\n");

    printf("element 1\n");
    int* one = GetIntArrRandom(1);
    printf("- before : ");
    PrintIntArr(one, 1);
    printf("- after : ");
    InsertionSort(one, 1);
    PrintIntArr(one, 1);
    printf("\n");

    printf("element 2\n");
    int* two = GetIntArrRandom(2);
    printf("- before : ");
    PrintIntArr(two, 2);
    printf("- after : ");
    InsertionSort(two, 2);
    PrintIntArr(two, 2);
    printf("\n");

    printf("Increse\n");
    int* increse = GetIntArrIncrese(20);
    printf("- before : ");
    PrintIntArr(increse, 20);
    printf("- after : ");
    InsertionSort(increse, 20);
    PrintIntArr(increse, 20);
    printf("\n");

    printf("Decrese\n");
    int* decrese = GetIntArrDecrese(20);
    printf("- before : ");
    PrintIntArr(decrese, 20);
    printf("- after : ");
    InsertionSort(decrese, 20);
    PrintIntArr(decrese, 20);
    printf("\n");

    printf("Random\n");
    int* random = GetIntArrRandom(20);
    printf("- before : ");
    PrintIntArr(random, 20);
    printf("- after : ");
    InsertionSort(random, 20);
    PrintIntArr(random, 20);
    printf("\n");

    printf("Same\n");
    int* same = GetIntArrSame(20);
    printf("- before : ");
    PrintIntArr(same, 20);
    printf("- after : ");
    InsertionSort(same, 20);
    PrintIntArr(same, 20);
    printf("\n");

    getchar();
}
