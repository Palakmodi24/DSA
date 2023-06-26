#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        int temp=arr[i];
        int j=i-1;
        for (; j>=0; j--)
        {
            if (arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
            
            
        }
        arr[j+1]=temp;
        
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

	
	insertionSort(arr, n);
	cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}