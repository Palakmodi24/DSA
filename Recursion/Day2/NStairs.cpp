#include<iostream>
using namespace std;

int countStairs(long long nStairs){
    if(nStairs<0){
        return 0;
    }
    if(nStairs==0){
        return 1;
    }
    int ans=countStairs(nStairs-1)+countStairs(nStairs-2);
    return ans;

}
int main()
{
    int n;
    cin>>n;
    int res=countStairs(n);
    cout<<res;
    return 0;
}