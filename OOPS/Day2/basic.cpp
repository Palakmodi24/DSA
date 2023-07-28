#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return this->age;
    }

};
int main()
{
    Student S1;
    cout<<"Sab shi chal raha hai";
    return 0;
}