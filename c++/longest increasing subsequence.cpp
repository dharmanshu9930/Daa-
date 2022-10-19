#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int lis(int arr[], int n) {
  int lis[n];

  lis[0] = 1;

  /* Compute optimized LIS values in
     bottom up manner */
  for (int i = 1; i < n; i++) {
    lis[i] = 1;
    for (int j = 0; j < i; j++)
      if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
        lis[i] = lis[j] + 1;
  }

  // Return maximum value in lis[]
  return *max_element(lis, lis + n);
}
int main() {
	// Your code goes here;
	int arr[] = {10, 22, 9, 33, 21, 50, 41, 60, 80};
	int n = 9;
	cout << lis(arr, n);
	return 0;
}