#include "stdafx.h"
#include "Struct.h"
#include "HeapSort.h"
#include "Example.h"

void MaxHeapify(Heap* heap, int pos)
{
	if (heap == nullptr)
	{
		return;
	}

	if (heap->size < pos)
	{
		return;
	}

	int large = pos;

	int left = 2 * pos;
	int right = left + 1;

	if (heap->size >= left && heap->element[left] > heap->element[large])
	{
		large = left;
	}

	if (heap->size >= right && heap->element[right] > heap->element[large])
	{
		large = right;
	}

	if (large != pos)
	{
		int temp = heap->element[pos];
		heap->element[pos] = heap->element[large];
		heap->element[large] = temp;
		
		MaxHeapify(heap, large);
	}
}

void BuildMaxHeap(Heap* heap)
{
	if (heap == nullptr)
	{
		return;
	}

	for (int i = heap->size / 2; i > 0; --i)
	{
		MaxHeapify(heap, i);
	}
}

void HeapIncreaseKey(Heap* heap, int pos, int value)
{
	if (heap == nullptr)
	{
		return;
	}

	if (value < heap->element[pos])
	{
		return;
	}

	heap->element[pos] = value;

	int parentPos = pos / 2;

	while (pos > 1 && heap->element[parentPos] < heap->element[pos])
	{
		int temp = heap->element[pos];
		heap->element[pos] = heap->element[parentPos];
		heap->element[parentPos] = temp;

		pos = parentPos;
		parentPos = parentPos / 2;
	}
}

int ExtractMax(Heap* heap)
{
	int temp = heap->element[1];
	heap->element[1] = heap->element[heap->size];
	heap->element[heap->size] = temp;

	MaxHeapify(heap, 1);

	return temp;
}

void MaxHeapInsert(Heap* heap, int key)
{
	heap->size = heap->size + 1;
	heap->element[heap->size] = key - 1;

	HeapIncreaseKey(heap, heap->size, key);
}

void HeapSort(int* arr, int size)
{
	Heap* heap = MakeHeap(arr, size);

	BuildMaxHeap(heap);

	for (int i = size; i > 0; --i)
	{
		arr[i - 1] = heap->element[1];

		heap->element[1] = heap->element[heap->size];
		heap->size = heap->size - 1;

		MaxHeapify(heap, 1);
	}
}