#include<iostream>
using namespace std;

int findUnique(int arr[],int size){
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans=ans^arr[i];
    }
    return ans;
    
}

int main()
{

    int arr1[5]={1,3,5,3,1};
    cout<<"Unique element is "<<findUnique;
    return 0;
}