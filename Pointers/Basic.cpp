#include<iostream>
using namespace std;
int main()
{
    int num=5;
    int *p = &num;
   // cout<<"Num "<<num<<endl;
    //cout<<"p "<<p<<endl;
    //cout<<"*p "<<*p<<endl;
/*
    int a=num;
    cout<<"a before "<<num<<endl;
    a++;
    cout<<"a after "<<num<<endl;
*/
    //copying
    int *q = p;
    cout<<p<<"-"<<q<<endl;
    cout<<*p<<"-"<<*q<<endl;

    //arithmetic

    int i=3;
    int *t=&i;
    (*t)++;
   // *t=*t+1;
    cout<<*t;

    cout<<"nrw"<<endl;
    int a=7;
    int *ptr=&a;
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr;



    return 0;
}