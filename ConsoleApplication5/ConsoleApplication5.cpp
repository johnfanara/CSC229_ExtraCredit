#include <iostream>
#include <algorithm>
using namespace std;

double LargeSum(int arr[], int n) {
	double high1, high2, low1, low2;
	double highSum, lowSum;
	double ratio = 0.0;

	sort(arr, arr + n);

	high1 = arr[n - 1];
	high2 = arr[n - 2];
	low1 = arr[0];
	low2 = arr[1];

	highSum = high1 + high2;
	lowSum = low1 + low2;

	ratio = highSum / lowSum;

	return ratio;
}

int main() {
	int arr[] = { 3, 5, 12, 450, 1, 1, 5, 6, 23, 6, 8, 9, 321, 2, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Ratio: " << LargeSum(arr, n);

	return 0;
}