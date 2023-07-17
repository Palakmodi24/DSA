#include<iostream>
using namespace std;
int getSum(int arr[],int size){
    //base case
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remainingPart= getSum(arr+1,size-1);
    int sum=arr[0]+remainingPart;
    return sum;
}
int main()
{
    int arr[5]={3,1,2,6,7};
    int res=getSum(arr,5);
    cout<<"Sum is "<<res<<endl;
    return 0;
}