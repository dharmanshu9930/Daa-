#include<iostream>

using namespace std;

int main() {

	int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
	int n = sizeof(arr) / sizeof(int);

	

	int x = arr[0]; // x[0]
	int maxSum = x;

	for(int i=1; i<n; i++) {
		x = max(arr[i], x+arr[i]);
		maxSum = max(maxSum, x);
	}

	cout << maxSum << endl;


	return 0;
}
