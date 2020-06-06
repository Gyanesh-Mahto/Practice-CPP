#include<iostream>
using namespace std;

class Static_variable
{
    public:
    static int x;
    
    Static_variable(){};
};

int Static_variable::x=1;   //This global declaration of variable is must if static variable is used. 

int main()
{
    Static_variable obj1;
    Static_variable obj2;
    obj1.x=100;
    obj2.x=200;
    cout<<obj1.x<<" "<<obj2.x<<endl;
    cout<<Static_variable::x<<endl; //Static Variable can be accessed with class name and scope resolution operator as well as object.
}
/*
O/P:
200 200
*/