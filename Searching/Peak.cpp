#include<iostream>
using namespace std;

int peakElement(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;

    while(start<end){
        if(arr[mid]>arr[mid+1]){
            start=mid+1;

        }
        else{
            end=mid;
        }
    }
    return start;
}

int main()
{

    int arr[5]={2,3,4,5,6};
    cout<<"Peak element: "<<peakElement(arr,5)<<endl;
    return 0;
}