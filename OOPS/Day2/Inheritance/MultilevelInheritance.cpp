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

class GermanShepherd: public Dog{

};
int main()
{
    GermanShepherd g;
    g.sleep();
    return 0;
}