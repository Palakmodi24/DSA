#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;

    //constructor
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    //push
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    
    }
    void pop(){
        if(top>0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }
    int peak(){
        if(top>0){
            return arr[top];
        }
        else{
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool empty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

};
int main()
{
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);

    

    cout << st.peak() << endl;

    st.pop();

    cout << st.peak() << endl;

    st.pop();

    cout << st.peak() << endl;

    st.pop();

    cout << st.peak() << endl;

    if(st.empty()) {
        cout << "Stack is Empty mere dost " << endl;
    }
    else{
        cout << "Stack is not Empty mere dost " << endl;
    }

    
    /*
    //creation
    stack<int> s;


    //push
    s.push(2);
    s.push(3);

    //pop
    s.pop();

    //printing
    cout<<"Stack elements "<<s.top()<<endl;

    //empty or not

    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    return 0;
    */
}