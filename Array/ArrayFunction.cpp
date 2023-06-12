#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    cout<<"Printing array: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing Done."<<endl<<endl;
}

int main()
{

    int first[10];
    for (int i = 0; i < 10; i++)
    {
        first[i]=2;    
    }
    printArray(first,10);

   int third[15]={2,7};
    printArray(third,15);

    return 0;
}