#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"Barking"<<endl;
    }
};

class Human{
    public:
    int age;

    public:
    void speak(){
        cout<<"Speakng"<<endl;
    }
};

class Hybrid: public Animal, public Human{

};
int main()
{
     Hybrid obj1;
    obj1.bark();
    obj1.speak();
    return 0;
}