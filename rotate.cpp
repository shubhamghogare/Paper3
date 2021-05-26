// C++ program to rotate an array by d elements
#include <iostream>
using namespace std;


void RotatebyOne(int arr[], int n)
{
	int temp = arr[0], i;
	for (i = 0; i < n - 1; i++)
		arr[i] = arr[i + 1];

	arr[n-1] = temp;
}

void Rotate(int arr[], int d, int n)
{
	for (int i = 0; i < d; i++)
		RotatebyOne(arr, n);
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[] = {1,2,3,4,5,6};
	int n = sizeof(arr) / sizeof(arr[0]);

	Rotate(arr, 2, n);              // Function calling
	printArray(arr, n);

	return 0;
}

