#include "stdafx.h"
#include "Struct.h"
#include "Example.h"
#include "math.h"

using namespace System;

int* GetIntArrIncrese(int num)
{
	if (num == 0)
	{
		return nullptr;
	}

	int* arr = new int[num];
	srand((unsigned int)time(NULL));

	arr[0] = rand() % 10;

	for (int i = 1; i < num; ++i)
	{
		arr[i] = arr[i - 1] + rand() % 10;
	}

	return arr;
}

int* GetIntArrDecrese(int num)
{
	if (num == 0)
	{
		return nullptr;
	}

	int* arr = new int[num];
	srand((unsigned int)time(NULL));

	arr[num - 1] = rand() % 10;

	for (int i = num - 2; i > -1; --i)
	{
		arr[i] = arr[i + 1] + rand() % 10;
	}

	return arr;
}

int* GetIntArrRandom(int num)
{
	if (num == 0)
	{
		return nullptr;
	}

	int* arr = new int[num];
	srand((unsigned int)time(NULL));

	int ranNum = num*num;

	for (int i = 0; i < num; ++i)
	{
		arr[i] = (rand() % ranNum) - ranNum / 2;
	}

	return arr;
}

int* GetIntArrSame(int num)
{
	if (num == 0)
	{
		return nullptr;
	}

	int* arr = new int[num];
	srand((unsigned int)time(NULL));

	int n = rand();

	for (int i = 0; i < num; ++i)
	{
		arr[i] = n;
	}

	return arr;
}

bool IsIncrease(int* arr, int num)
{
	for (int i = 0; i < num - 1; ++i)
	{
		if (arr[i] > arr[i + 1])
		{
			printf("false \n");
			return false;
		}
	}

	printf("true \n");
	return true;
}

Heap* MakeSampleHeap(int num)
{
	int* arr = GetIntArrRandom(num + 1);

	arr[0] = 0;

	Heap* sample = new Heap{ arr, num };

	return sample;
}

Heap* MakeHeap(int* arr, int size)
{
	int* element = new int[size + 1];

	element[0] = 0;

	memcpy(&element[1], arr, sizeof(int)*size);

	Heap* heap = new Heap{ element, size };

	return heap;
}

bool IsMaxHeap(Heap* heap, int pos)
{
	int left = 2 * pos;
	int right = left + 1;

	if (heap->size <= left && heap->element[left] < pos)
	{
		return false;
	}

	if (heap->size <= right && heap->element[right] < pos)
	{
		return false;
	}

	if (heap->size <= left && !IsMaxHeap(heap, left))
	{
		return false;
	}

	if (heap->size <= right && !IsMaxHeap(heap, right))
	{
		return false;
	}

	return true;
}

void PrintIntArr(int* arr, int s, int e)
{
	if (arr == nullptr)
	{
		printf("null");
		printf("\n");
		return;
	}

	for (int i = s; i <= e; ++i)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
}

void PrintIntArr(int* arr, int num)
{
	PrintIntArr(arr, 0, num - 1);
}

void PrintHeapTree(int* arr, int size, int h)
{
	if (arr == nullptr)
	{
		printf("null");
		printf("\n");
		return;
	}

	int leafNum = (int)pow(2,(double)(h + 1));

	int width = leafNum * 2 - 1;

	int heightNodeNum = 1;

	int edge = width / 2;

	int index = 1;

	for (int i = 0; i <= h + 1; ++i)
	{
		for (int j = 0; j < heightNodeNum; ++j)
		{
			for (int k = 0; k < edge; ++k)
			{
				printf("    ");
			}

			int t = 3;

			int a = arr[index];

			if (arr[index] < 0)
			{
				--t;
				a = -a;
			}

			if (a >= 10)
			{
				--t;
			}

			if (a >= 100)
			{
				--t;
			}

			for (int j = 0; j < t; ++j)
			{
				printf(" ");
			}

			printf("%d", arr[index]);
			++index;

			if (index == size)
			{
				break;
			}

			for (int k = 0; k < edge; ++k)
			{
				printf("    ");
			}

			if (index != heightNodeNum)
			{
				printf("    ");
			}

		}

		edge = edge / 2;

		heightNodeNum = heightNodeNum * 2;

		printf("\n");
	}
}

void PrintHeap(Heap* heap)
{
	printf("- Array : ");
	PrintIntArr(heap->element, 1, heap->size);

	printf("- Tree\n");

	int h = 1;
	int size = heap->size;

	while (size % 2 == 0)
	{
		size = size / 2;
		++h;
	}

	PrintHeapTree(heap->element, heap->size + 1, h);
}