/*
There may be cases where you don’t want someone to be able to override a virtual function, or inherit from a class. The final specifier can be used to 
tell the compiler to enforce this. If the user tries to override a function or class that has been specified as final, the compiler will give a 
compile error.

In the case where we want to restrict the user from overriding a function, the final specifier is used in the same place the override specifier is, like 
so:
*/
#include<iostream>
using namespace std;

class Base
{
    public:
    virtual int Get_Value(int x)
    {
        return x;
    }
    virtual void print_Name() const
    {
        cout<<"Base"<<endl;
    }
};

class Derived_1: public Base
{
    public:
    int Get_Value(int x) override final  //final keyword is used here so that comeone may not be able to override a virtual function, or inherit from a class
    {
        return 2*x;
    }
    void print_Name() const override
    {
        cout<<"Derived"<<endl;
    }
};

class Derived_2: public Derived_1
{
    public:
    int Get_Value(int x)  override    //Error: overriding final function 'virtual int Derived_1::Get_Value(int)'
    {
        return 3*x;
    }
    void print_Name() const override
    {
        cout<<"Derived"<<endl;
    }
};

int main()
{
    Derived_1 d;
    Base *b=&d;
    cout<<b->Get_Value(5)<<endl;
    b->print_Name();
}