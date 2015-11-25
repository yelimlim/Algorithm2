#pragma once
void MaxHeapify(Heap* heap, int i);

void BuildMaxHeap(Heap* heap);

void HeapIncreaseKey(Heap* heap, int pos, int value);

int ExtractMax(Heap* heap);

void MaxHeapInsert(Heap* heap, int key);

void HeapSort(int* arr, int size);