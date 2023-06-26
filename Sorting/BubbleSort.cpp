
#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[],int n){
    bool swapped;
     for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
 
        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
 
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++) {
		cout << arr[i] << " ";
		cout << endl;
	}
}


int main()
{
	int arr[] = { 64, 25, 12, 22, 11 };
	int n = sizeof(arr) / sizeof(arr[0]);

	
	BubbleSort(arr, n);
	cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}


