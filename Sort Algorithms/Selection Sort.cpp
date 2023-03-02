#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int length) {
	for(int i = 0; i < length; ++i)
		cout << arr[i] << ' ';
	cout << '\n';
}

void selectionSort(int arr[], int length) {
	int min;
	for(int i = 0; i < length - 1; ++i) {
		min = i;
		for(int j = i + 1; j < length; ++j)
			if(arr[j] < arr[min])
				min = j;
		swap(arr[min], arr[i]);
	}
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int arr[] = {5,4,3,1,2};
	printArray(arr, 5);
	selectionSort(arr, 5);
	printArray(arr, 5);
	return 0;
}
