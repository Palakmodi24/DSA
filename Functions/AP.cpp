#include<iostream>
using namespace std;

int ap(int a,int n,int d){
    int ans=(a+(n-1)*d);
    return ans;
}

int main()
{
    int a,n,d;
    cout<<"Enter first term: "<<endl;
    cin>>a;
    cout<<"Enter nth term which you want to find: "<<endl;
    cin>>n;
    cout<<"Enter common difference: "<<endl;
    cin>>d;

    cout<<"Value of nth term is: "<<ap(a,n,d);

    return 0;
}