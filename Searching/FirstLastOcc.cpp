#include<iostream>
using namespace std;

int firstOcc(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;

        }
        else if(arr[mid]>key){
            end=mid-1;

        }
        else if(arr[mid]<key){
            start=mid+1;

        }
        mid=start+(end-start)/2;
    }
    return ans;

}


int lastOcc(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;

        }
        else if(arr[mid]>key){
            end=mid-1;

        }
        else{
            start=mid+1;

        }
        mid=start+(end-start)/2;
    }
    return ans;

}


int main()
{

    int even[8]={1,2,3,3,3,4,5,6};
    
    cout<<"First occurence of 3 is: "<<firstOcc(even,8,3)<<endl;
    cout<<"Last occurence of 3 is: "<<lastOcc(even,8,3)<<endl;


    return 0;
}


