//https://www.codingninjas.com/studio/problems/design-a-stack-that-supports-getmin-in-o-1-time-and-o-1-extra-space_842465?leftPanelTab=0

#include<stack>
class SpecialStack {
    public:
    stack<int>s;
    int mini;
        
    void push(int data) {
        if(s.empty()){
            s.push(data);
            mini=data;
        }
        else{
            if(data<mini){
                int val=2*data-mini;
                s.push(val);
                mini=data;
            }
            else{
                s.push(data);
            }
        }
    }

    int pop() {
        // Implement the pop() function.
        if(s.empty()){
            return -1;
        }
        int curr=s.top();
        s.pop();
        if(curr>mini){
            return curr;
        }
        else{
            int prevMin=mini;
            int val=2*mini-curr;
            mini=val;
            return prevMin;
        }
    }

    int top() {
        // Implement the top() function.
        if(s.empty()){
            return -1;
        }
        int curr=s.top();
        if(curr<mini){
            return mini;
        }else{
            return curr;
        }

    }
    bool isEmpty(){
        return s.empty();
    }

    int getMin() {
        // Implement the getMin() function.
        if(s.empty()){
            return -1;
        }
        return mini;
        
    }  
};