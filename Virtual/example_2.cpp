#include<iostream>
using namespace std;

class Base
{
    public:
    virtual void print_fun()
    {
        cout<<"Base"<<endl;
    }

    virtual int get_value()
    {
        return 2;
    }
};

class Derived: public Base
{
    public:
    virtual void print_fun()
    {
        cout<<"Derived"<<endl;
    }

    virtual int get_value()  //Under normal circumstances, the return type of a virtual function and its override must match
    {
        return 2.0;
    }
};

int main()
{
    Derived d;
    Base *b=&d;
    b->print_fun();
}

/*
O/P:
Derived
*/