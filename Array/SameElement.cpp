#include<iostream>
using namespace std;
int main()
{

    int arr1[10];
    int arr2[5];
    cout<<"Elements of array 1: ";
    for (int i = 0; i < 10; i++)
    {
        arr1[i]=2;
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    

    cout<<"Elements of array 2: ";
     for (int i = 0; i < 5; i++)
    {
        arr2[i]=4;
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    
    
    return 0;
}