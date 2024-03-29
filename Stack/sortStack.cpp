#include <bits/stdc++.h> 

void sortedInsert(stack<int> &stack, int num){
	//base case
	if(stack.empty() || (!stack.empty()&&stack.top()<num)){
		stack.push(num);
		return;
	}
	int n=stack.top();
	stack.pop();

	//recursive 
	sortedInsert(stack,num);
	stack.push(n);
}

void sortStack(stack<int> &stack)
{
	// Write your code here
	//base case
	if(stack.empty()){
		return;
	}
	int num=stack.top();
	stack.pop();

	//recursive
	sortStack(stack);
	sortedInsert(stack,num);
}

//https://www.codingninjas.com/studio/problems/sort-a-stack_985275?leftPanelTab=1