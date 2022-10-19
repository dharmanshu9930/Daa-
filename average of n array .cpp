#include <iostream>
using namespace std;
int main()
{
	int n, i, sum = 1;
	cout << "Enter the size of the array : ";
	cin >> n;
	int arr[n];
	for (i = 0; i < n; i++)
		cin >> arr[i];
	for (i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}
	cout << "average of array elements : " << sum / n;
	return 0;
}