//It is a keyword which is used to allow a particular data member of a constant object to be modified.

#include<iostream>
using namespace std;

class example
{
    public:
    int x;
    mutable int y;
    int z;
};

int main()
{
    const example ex1{1,2,3};   //constant object
    cout<<ex1.x<<endl;
    cout<<ex1.y<<endl;
    cout<<ex1.z<<endl;
    //ex1.x=10;     //Error: assignment of member 'example::x' in read-only object
    ex1.y=20;
    //ex1.z=30;     //Error: assignment of member 'example::z' in read-only object
    cout<<ex1.x<<endl;
    cout<<ex1.y<<endl;
    cout<<ex1.z<<endl;
}