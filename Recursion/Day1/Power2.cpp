#include<iostream>
using namespace std;

int power(int n){
    if(n==0){
        return 1;
    }
    int smallerproblem=power(n-1);
    int bigproblem=2*smallerproblem;
    return bigproblem;
}
int main()
{
    int n;
    cin>>n;
    int ans=power(n);
    cout<<"2 raised to power "<<n<<" is "<<ans<<endl;


    return 0;
}