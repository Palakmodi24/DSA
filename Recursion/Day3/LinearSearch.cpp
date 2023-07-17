#include<iostream>
using namespace std;

void print(int arr[],int size){
    cout<<"size of array is "<<size<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}

bool linearSearch(int arr[],int size,int k){
    print(arr,size);
    //base case
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        bool remainingPart=linearSearch(arr+1,size-1,k);
        return remainingPart;
    }
}
int main()
{
    int arr[5]={3,5,2,1,6};
    int k=2;
    int res=linearSearch(arr,5,k);
    if(res){
       cout<<"Element found";
    }
    else{
        cout<<"Not found";
    }
    
    return 0;
}  