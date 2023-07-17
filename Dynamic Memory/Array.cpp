//Program to create an array usin dynamic mymory allocation
#include<iostream>
using namespace std;

int getSum(int *arr, int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    return sum;
    

}
int main()
{
    
    int n;
    cin>>n;

    //variable size array
    int* arr= new int[n];
    //taking input
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int res=getSum(arr,n);
    cout<<res<<endl;

    //case1
    while (true)
    {
        int i=5; //variable create memory releases and creates again n again. Only 4 byte consumed
    }
    //case2
    while (true)
    {
        int* ptr = new int; // 8 byte release but 4 byte is saved. When memory gets fulledprogram crashes
    }
    
    
    
    return 0;
}