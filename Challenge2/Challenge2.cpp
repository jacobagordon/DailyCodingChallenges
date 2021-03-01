#include <iostream>
using namespace std;

int main() {
	int arr[] { 1, 2, 3, 4, 5 };
	int n = sizeof(arr)/sizeof(arr[0]);
	int left[n] { };
	int right[n] { };

	int prod = 1;
	for (int i=0; i<n; i++) {
		left[i] = prod;
		prod *= arr[i];
	}
	
	prod = 1;
	for (int i=n-1; i>=0; i--) {
		right[i] = prod;
		prod *= arr[i];
	}
	
	for (int i=0; i<n; i++) {
		arr[i] = left[i] * right[i];
	}

	for (int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
}