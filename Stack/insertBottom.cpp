#include <bits/stdc++.h> 
void solve(stack<int>& s, int x){
    //base case
    if(s.empty()){
        s.push(x);
        return ;
    }

    int num=s.top();
    s.pop();

    solve(s,x);
    s.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    solve(myStack,x);
    return myStack;
}





///https://www.codingninjas.com/studio/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?leftPanelTab=1