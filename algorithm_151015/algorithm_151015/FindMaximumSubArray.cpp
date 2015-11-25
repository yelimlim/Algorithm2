#include "stdafx.h"
#include "Struct.h"
#include "FindMaximumSubArray.h"

Info* MaxSumFromPos(int* arr, int size, int pos)
{
	int max = arr[pos];
	int index = pos;
	int sum = arr[pos];

	for (int i = pos + 1; i < size; ++i)
	{
		sum += arr[i];

		if (max < sum)
		{
			max = sum;
			index = i;
		}
	}

	Info* info = new Info{ pos, index, max };

	return info;
}

Info* FindMaximumSubArrayN2(int* arr, int num)
{
	if (arr == nullptr)
	{
		Info* nullInfo = new Info{ -1, -1, -1 };
		return nullInfo;
	}

	Info* maxInfo = MaxSumFromPos(arr, num, 0);

	for (int i = 0; i < num; ++i)
	{
		Info* temp = MaxSumFromPos(arr, num, i);

		if (maxInfo->sum < temp->sum)
		{
			delete maxInfo;
			maxInfo = temp;
		}
	}

	return maxInfo;
}

Info* FindMaxCrossSubArray(int* arr, int s, int mid, int e)
{
	int leftMax = arr[mid];
	int rightMax = arr[mid + 1];

	int leftSum = arr[mid];
	int rightSum = arr[mid + 1];

	int start = mid;
	int end = mid + 1;

	for (int i = mid - 1; i >= s; --i)
	{
		leftSum += arr[i];
		if (leftSum > leftMax)
		{
			leftMax = leftSum;
			start = i;
		}
	}

	for (int i = mid + 2; i <= e; ++i)
	{
		rightSum += arr[i];
		if (rightSum > rightMax)
		{
			rightMax = rightSum;
			end = i;
		}
	}

	Info* crossInfo = new Info{ start, end, leftMax + rightMax };

	return crossInfo;
}

Info* FindMaximumSubArrayDivide(int* arr, int s, int e)
{
	if (arr == nullptr)
	{
		Info* nullInfo = new Info{ -1, -1, -1 };
		return nullInfo;
	}

	if (s == e)
	{
		Info* oneInfo = new Info{ s, e, arr[s] };
		return oneInfo;
	}

	int mid = s + (e - s) / 2;

	Info* left = FindMaximumSubArrayDivide(arr, s, mid);
	Info* right = FindMaximumSubArrayDivide(arr, mid + 1, e);

	Info* cross = FindMaxCrossSubArray(arr, s, mid, e);

	Info* max;

	if (left->sum > right->sum && left->sum > cross->sum)
	{
		max = left;
		delete right;
		delete cross;
	}
	else if (right->sum > left->sum && right->sum > cross->sum)
	{
		max = right;
		delete left;
		delete cross;
	}
	else
	{
		max = cross;
		delete left;
		delete right;
	}

	return max;
}