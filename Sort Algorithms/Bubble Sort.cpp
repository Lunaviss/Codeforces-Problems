#include<bits/stdc++.h>

using namespace std;

void printArray(int arr[], int length) {
	for(int i = 0; i < length; ++i)
		cout << arr[i] << ' ';
	cout << '\n';
}

void bubbleSort(int arr[], int length) {
	for(int i = 0; i < length - 1; ++i)
		for(int j = 0; j < length - 1 - i; ++j)
			if(arr[j] > arr[j+1])
				swap(arr[j], arr[j+1]);
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	// freopen("learning.INP", "r", stdin);
	int arr[] = {2,3,5,7,1};
	printArray(arr, 5);
	bubbleSort(arr, 5);
	printArray(arr, 5);
	return 0;
}
