#include <bits/stdc++.h> 
#include<stack>
void solve(stack<int>&inputStack,int count, int size){
   //base case
   if(count==size/2){
      inputStack.pop();
      return;
   }  
   int num=inputStack.top();
   inputStack.pop();
   //recursive

   solve(inputStack,count+1,size);
   inputStack.push(num);
}
void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   int count=0;
   solve(inputStack,count,N);
}


///https://www.codingninjas.com/studio/problems/delete-middle-element-from-stack_985246?leftPanelTab=1