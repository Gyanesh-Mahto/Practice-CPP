#include<iostream>
#include<vector>
using namespace std;

vector<int> Square(vector<int> vec);    //Function Declaration

int main()
{
    vector<int> v={1,2,3,4,5}, v_squared;
    cout<<"Vector Data: "<<endl;
    for(const auto& num : v)
    {
        cout<<num<<" ";
    }
    cout<<endl;
    cout<<"Vector Squared Data: "<<endl;
    v_squared=Square(v);            //Functiona Call
    for(const auto& num : v_squared)
    {
        cout<<num<<" ";
    }
    cout<<endl;
}

vector<int> Square(vector<int> vec)     //Function Definition
{
    vector<int> v_result;
    for(auto& num:vec)
    {
        num=num*num;
        v_result.push_back(num);
    }
    return v_result;
}