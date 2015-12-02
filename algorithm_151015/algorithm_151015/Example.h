int* GetIntArrIncrese(int num);

int* GetIntArrDecrese(int num);

int* GetIntArrRandom(int num);

int* GetIntArrSame(int num);

bool IsIncrease(int* arr, int num);

bool IsMax(int* arr, int start, int end, int value);

bool IsMin(int* arr, int start, int end, int value);

Heap* MakeSampleHeap(int num);

Heap* MakeHeap(int* arr, int size);

bool IsMaxHeap(Heap* heap, int pos);

void PrintIntArr(int* arr, int s, int e);

void PrintIntArr(int* arr, int num);

void PrintHeapTree(int* arr, int size, int h);

void PrintHeap(Heap* heap);