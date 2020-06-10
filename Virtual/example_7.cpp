#include<iostream>
using namespace std;

class Base
{
    public:
    Base()
    {
        cout<<get_name()<<endl;
    }
    virtual void print_fun() const
    {
        cout<<"Base"<<endl;
    }
    virtual string get_name()
    {
        return "Base";
    }
};

class Derived_1: public Base
{
    public:
    virtual void print_fun()
    {
        cout<<"Derived_1"<<endl;
    }
    virtual string get_name()
    {
        return "Derived_1";
    }
};

class Derived_2: public Derived_1
{
    public:
    virtual void print_fun()
    {
        cout<<"Derived_2"<<endl;
    }
    virtual string get_name()
    {
        return "Derived_2";
    }
};

class Derived_3: public Derived_2
{
    public:
    virtual void print_fun()
    {
        cout<<"Derived_3"<<endl;
    }
    virtual string get_name()
    {
        return "Derived_3";
    }
};

int main()
{
    Derived_2 d_2;
}

/*
O/P:
Base
*/