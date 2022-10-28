#include <bits/stdc++.h>
using namespace std;


void reverseArray(int arr[], int start, int end)
{
	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}


void leftRotate(int arr[], int d, int n)
{
	if (d == 0)
		return;
	

	d = d % n;

	reverseArray(arr, 0, d - 1);
	reverseArray(arr, d, n - 1);
	reverseArray(arr, 0, n - 1);
}


void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}


int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int N = sizeof(arr) / sizeof(arr[0]);
	int d = 2;


	leftRotate(arr, d, N);
	printArray(arr, N);
	return 0;
}
