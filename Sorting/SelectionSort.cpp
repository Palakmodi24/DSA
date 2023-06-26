
#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIndex=i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
            
        }
        if(minIndex!=i)
          swap(arr[minIndex],arr[i]);       
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

	
	SelectionSort(arr, n);
	cout << "Sorted array: ";
	printArray(arr, n);
	return 0;
}


