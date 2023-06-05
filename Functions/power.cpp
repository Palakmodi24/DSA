#include<iostream>
using namespace std;

int power(int a,int b){
    int ans=1;
    for (int i = 0; i < b; i++)
    
    {
       ans = ans*a;
    }
    
}

int main()
{
    cout<<"Enter value of a and b "<<endl;
    int a,b;
    cin>>a>>b;
    int answer=power(a,b);
    cout<<answer<<endl;

    return 0;
    
}