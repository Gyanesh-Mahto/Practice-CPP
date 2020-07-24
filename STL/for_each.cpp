#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    cout<<"For loop"<<endl;
    for(int i=0; i<v.size(); i++)   //For loop
    {
        cout<<v[i]<<endl;
    }
    cout<<endl<<"For each loop"<<endl;
    for(int i:v)    //For each loop
    {
        cout<<i<<endl;
    }
    vector<string> vec={"Hello", "World","Welcome you all"};
    for(const auto& s:vec)
    {
        cout<<s<<endl;
    }
    cout<<endl<<"Range for loop"<<endl;
    for(const auto& c:vec.front())
    {
        cout<<c<<endl;
    }
}