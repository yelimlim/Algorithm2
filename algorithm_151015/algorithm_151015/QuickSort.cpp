#include "stdafx.h"
#include "QuickSort.h"

int Partition(int* arr, int start, int end)
{
	if (arr == nullptr)
	{
		return -1;
	}

	if (start >= end)
	{
		return -1;
	}

	int smallIndex = start - 1;

	for (int i = start; i < end; ++i)
	{
		if (arr[i] <= arr[end])
		{
			++smallIndex;
			int temp = arr[i];
			arr[i] = arr[smallIndex];
			arr[smallIndex] = temp;
		}
	}

	int temp = arr[end];
	arr[end] = arr[smallIndex + 1];
	arr[smallIndex + 1] = temp;

	return smallIndex + 1;
}

void QuickSort(int* arr, int start, int end)
{
	if (arr == nullptr)
	{
		return;
	}

	if (start >= end)
	{
		return;
	}

	int pivot = Partition(arr, start, end);

	QuickSort(arr, start, pivot - 1);
	QuickSort(arr, pivot + 1, end);
}