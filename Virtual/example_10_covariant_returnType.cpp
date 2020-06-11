#include<iostream>
using namespace std;

class Base
{
    public:
    virtual Base* Get_Value()
    {
        cout<<"Call from base"<<endl;
        return this;
    }
    void print_Name() const
    {
        cout<<"Base"<<endl;
    }
};

class Derived: public Base
{
    public:
    virtual Derived* Get_Value()
    {
        cout<<"Call from Derived"<<endl;
        return this;
    }
    void print_Name() const
    {
        cout<<"Derived"<<endl;
    }
};

int main()
{
    Derived d;
    Base *b=&d;
    d.Get_Value()->print_Name();
    b->Get_Value()->print_Name();
}
/*
O/P:
-----
Call from Derived
Derived
Call from Derived
Base
*/