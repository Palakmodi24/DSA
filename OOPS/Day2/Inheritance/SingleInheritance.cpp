#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;

    public:
    void sleep(){
        cout<<"Sleeping"<<endl;
    }
};
class Dog: public Animal{


};
int main()
{
    Dog d;
    d.sleep();
    return 0;
}