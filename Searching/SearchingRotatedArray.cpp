#include<iostream>
using namespace std;

int getPivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s=(e-s)/2;
    while (s<e)
    {
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
    
}

int binarySearch(int arr[],int s, int e, int key){
    int start =s;
    int end=e;
    int mid=start+(end-start)/2;

    while (start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
    
}

int main()
{
    int arr[5]={5,7,1,2,3};
    int n=5;
    int pivot=getPivot(arr,5);
    int k;
    
    if ((k>=arr[pivot])&&k<=n-1)
    {
        return binarySearch(arr, pivot,n-1,7);
        
    }
    else{
        return binarySearch(arr,0,pivot-1,7);
        
    }
    

    
}