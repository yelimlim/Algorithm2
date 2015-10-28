void Merge(int* A, int aNum, int* B, int bNum, int* bufArr)
{
    if (A == nullptr || B == nullptr)
    {
        return;
    }

    int i = 0;
    int j = 0;
    
    //int* bigArr = (int*)malloc(sizeof(int) * (aNum + bNum));
    int k = 0;

    while (i < aNum && j < bNum)
    {
        if (A[i] < B[j])
        {
            bufArr[k] = A[i];
            ++k;
            ++i;
        }
        else
        {
            bufArr[k] = B[j];
            ++k;
            ++j;
        }
    }

    while (i < aNum)
    {
        bufArr[k] = A[i];
        ++k;
        ++i;
    }

    while (j < bNum)
    {
        bufArr[k] = B[j];
        ++k;
        ++j;
    }
}

void MergeSort(int* arr, int begin, int last)
{
    if (begin >= last)
    {
        return;
    }

    int mid = (last - begin) / 2 + begin;

    MergeSort(arr, begin, mid);
    MergeSort(arr, mid + 1, last);

    int leftNum = (last - begin) / 2 + 1;
    int rightNum = (last - begin) - leftNum + 1;

    int* leftArr = new int[leftNum];
    int* rightArr = new int[rightNum];

    for (int i = 0; i < leftNum; ++i)
    {
        leftArr[i] = arr[begin + i];
    }

    for (int i = 0; i < rightNum; ++i)
    {
        rightArr[i] = arr[begin + leftNum + i];
    }

    int* bufArr = new int[leftNum + rightNum];

    Merge(leftArr, leftNum, rightArr, rightNum, bufArr);

    for (int i = 0; i < last - begin + 1; ++i)
    {
        arr[begin + i] = bufArr[i];
    }
}