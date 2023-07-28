#include<iostream>
using namespace std;

class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getage(){
    return this->age;
    }
    void setweight(int w){
        this->weight=w;
    }
};
class Male: public Human{
    public:
    string color;

    void sleep(){
        cout<<"Sleeping"<<endl;
    }

};
int main()
{
    Male obj1;
    cout<<"Age "<<obj1.age<<endl;
    cout<<"Weight "<<obj1.weight<<endl;
    cout<<"Height "<<obj1.height<<endl;
    cout<<"Color "<<obj1.color<<endl;
    obj1.sleep();

    return 0;
}