#include<iostream>
#include <cstring>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char* name;
    char level;
    static int timeToComplete;
   
    //Default constructor------>Shallow Copy
    Hero(){
        cout<<"Simple Constructor called"<<endl;
        name=new char[100];
    }

    //Parameterized Constructor
    Hero(int health){
      this -> health=health;
    }
    Hero(int health,char level){
        this -> level=level;
        this -> health=health;
    }

    //copy constructor---->Deep Copy
    Hero(Hero& temp){

        char*ch= new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        cout<<"Constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;

    }
     void print(){
        cout<<endl;
        cout<<"[Name: "<<this->name<<", ";
        cout<<"Health: "<<this ->health<<", ";
        cout<<"Level: "<<level<<"]"<<endl<<endl;
    }

    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }
    void setLevel(char ch){
        level=ch;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }
    static int random(){
        return timeToComplete;
    }
    ~Hero(){
        cout<<"Destructor Called"<<endl;
    }
};

int Hero:: timeToComplete=5;
int main()
{
    cout<<Hero::random()<<endl;



    /*
    cout<<Hero::timeToComplete<<endl;

    Hero a;
    cout<<a.timeToComplete<<endl;

    Hero b;
    b.timeToComplete=10;
    cout<<a.timeToComplete<<endl;
    cout<<b.timeToComplete<<endl;





    //static
    Hero a; //destructor will be called automatically

    //dynamic
    Hero *b=new Hero; //destructor will be called manually
    delete b;

    Hero hero1;
    hero1.setHealth(60);
    hero1.setLevel('F');
    char name[6]="Palak";
    hero1.setName(name);
    //hero1.print();

    Hero hero2(hero1);
    //hero2.print();

    hero1.name[0]='S';
    hero1.print();
    hero2.print();
    hero1=hero2;
    hero1.print();
    hero2.print();



    

    
    //object created statically
    Hero ramesh(10);
    cout<<"Address of Ramesh "<<&ramesh<<endl;
    ramesh.print();
    //object created dynamically

    Hero* h=new Hero;
    h->print();
    Hero temp(20, 'V');
    temp.print();
    
    
   
    //static allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('A');
    cout<<"Health of a "<<a.getHealth()<<endl;
    cout<<"Level of a is "<<a.level<<endl<<endl;

    Hero *b=  new Hero;
    (*b).setHealth(56);
    (*b).setLevel('B');
    cout<<"Health of b "<<(*b).getHealth()<<endl;
    cout<<"Level of b is "<<(*b).level<<endl;

    cout<<"Health of b "<<b->getHealth()<<endl;
    cout<<"Level of b is "<<b->level<<endl;


    
    Hero h1;
    cout<<"h1's health is "<<h1.getHealth();
    h1.setHealth(70);
    cout<<"Health of h1 is "<<h1.getHealth()<<endl;
    cout<<"Level of h1 is "<<h1.level<<endl;*/
    return 0;
}