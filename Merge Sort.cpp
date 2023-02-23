#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int length) {
	for (int i = 0; i < length; ++i)
    	cout << arr[i] << ' '; 
  	cout << '\n';
}

void merge(int arr[], int const l, int const m, int const r) {

	int i, j, k;
	int const l_length = m - l + 1;
	int const r_length = r - m;

	int left[l_length];
	int right[r_length];

	for (i = 0; i < l_length; ++i)
    		left[i] = arr[l + i];
	for (j = 0; j < r_length; ++j)
    		right[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l; 

    while(i < l_length && j < r_length) {
    	if (left[i] <= right[j]) {
    		arr[k] = left[i];
    		i++;
    	} else {
    		arr[k] = right[j];
    		j++;
    	}
    	k++;
    }

    while(i < l_length) {
    	arr[k] = left[i];
    	i++;
    	k++;
    }

    while(j < r_length) {
    	arr[k] = right[j];
    	j++;
    	k++;
    }
}

void mergeSort(int arr[], int l, int r) {
	if (l < r) {
		int m = l + (r - l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}

int main(int argc, char const *argv[])
{
  	ios::sync_with_stdio(0);
  	cin.tie(0); cout.tie(0);

  	int arr[] = {6, 5, 12, 10, 9, 1};
  	int size = sizeof(arr)/sizeof(arr[0]);
  	
  	cout << "Before: ";
  	printArray(arr,size);
  	mergeSort(arr, 0, size - 1);
  	cout << "After: ";
  	printArray(arr,size);
  	return 0;
}
