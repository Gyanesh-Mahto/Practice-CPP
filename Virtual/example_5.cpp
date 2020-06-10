#include<iostream>
using namespace std;

class Base
{
    public:
    void print_fun()
    {
        cout<<"Base"<<endl;
    }
};

class Derived_1: public Base
{
    public:
    virtual void print_fun()
    {
        cout<<"Derived_1"<<endl;
    }
};

class Derived_2: public Derived_1
{
    public:
    virtual void print_fun()
    {
        cout<<"Derived_2"<<endl;
    }
};

class Derived_3: public Derived_2
{
    public:
    virtual void print_fun()
    {
        cout<<"Derived_3"<<endl;
    }
};

int main()
{
    Derived_2 d_2;
    Base *b=&d_2;
    b->print_fun();
}

/*
O/P:
Base
*/