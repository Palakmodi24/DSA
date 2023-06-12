#include<iostream>
using namespace std;

int sumArray(int arr[],int size){
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
    
}

int main()
{

    int size;
    cout<<"Enter array size: ";
    cin>>size;

    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Sum of array is: "<<sumArray(arr,size)<<endl;
    return 0;
}