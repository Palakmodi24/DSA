#include<iostream>
using namespace std;
int main()
{
/*
    int arr[10]={23,55,78,122,176};

    cout<<"Address of first memory block "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Address of first memory block "<<&arr[0]<<endl; //both will be same

    cout<<"4th "<<*arr<<endl;
    cout<<"5th "<<*arr+1<<endl;
    cout<<"6th "<<*(arr+1)<<endl;
    cout<<"7th "<<arr[2]<<endl;               
    cout<<"8th "<<*(arr+2)<<endl;

    //arr[i]=*(arr+i)=i[arr];

    int temp[10]={1,2};
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(*temp)<<endl;

    int *ptr = &temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
    

int a[20]={1,2,3,5};
cout<<&a[0]<<endl;
//cout<<&a<<endl;
//cout<<a<<endl;

int *p=&a[0];
//cout<<p<<endl;
//cout<<*p<<endl;
cout<<&p<<endl;



int arr[10];
int *ptr=&arr[0];
cout<<ptr<<endl;
ptr=ptr+1;
cout<<ptr<<endl;
*/
int a[] = {1, 2, 3, 4};
int *p = a++;
cout << *p;
    return 0;
}