//Reverse upto certain value
#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v, int m) {
    int s=m; int e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;

}

void print(vector<int> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}

int main()
{
    vector <int> v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
cout<<"Before Reversing-> ";
print(v);
int m;
cout<<"Enter value of m";
cin>>m;
vector <int> ans= reverse(v,m);
cout<<"After Reversing-> ";
print(ans);

    return 0;
}