 #include<iostream>
 using namespace std;
 int main()
 {
    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde";
    cout<<arr<<endl; //address
    cout<<ch<<endl;//value

    char *c = &ch[0];
    cout<<c<<endl;
    cout<<&c<<endl;
     return 0;
 }