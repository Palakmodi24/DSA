#include<iostream>
using namespace std;

void update(int **p2){
    //p2=p2+1;
    //kuch change hoga?  ->  NO
    
    //*p2=*p2+1;
    //kuch change hoga?  -> YES p will change

    **p2=**p2+1;
    //kuch change hoga?   -> YES i will change 
}
int main()
{
    int i=5;
    int *p = &i;
    int **p2 = &p;

    //cout<<endl<<endl<<"Sab Shi chal rha hai"<<endl<<endl;

  /* cout<<"Printing p "<<p<<endl;
    cout<<"Adreess of p "<<p<<endl;
    cout<<*p2<<endl<<endl;
 
    cout<<"Printing i"<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl<<endl;

    cout<<"Printing value at p"<<endl;
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl<<endl;

    cout<<"Printing value at p2"<<endl;
    cout<<&p<<endl;
    cout<<p2<<endl;
*/
cout<<endl<<endl;
cout<<"before "<<i<<endl;
cout<<"before "<<p<<endl;
cout<<"before "<<p2<<endl;
update(p2);
cout<<"after "<<i<<endl;
cout<<"after "<<p<<endl;
cout<<"after "<<p2<<endl;
cout<<endl<<endl;


    return 0;
}
