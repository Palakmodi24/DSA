#include<iostream>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"Hello Palak"<<endl;
    }
    int sayHello(string name, int n){
        cout<<"Hello, Palak"<<endl;
        return n;

    }
    void sayHello(string name){
        cout<<"Hello Palak!"<<endl;
    }
};
int main()
{
    A obj;
    obj.sayHello();
    

    return 0;
}
