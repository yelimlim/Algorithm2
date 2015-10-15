#include "stdafx.h"

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
    
    for (int i = 0; i < num; ++i)
    {
        arr[i] = rand() % (num*num);
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