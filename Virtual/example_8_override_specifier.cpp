/*
In this particular case, because Base and Derived just print their names, it’s fairly easy to see that we messed up our overrides, and that the wrong 
virtual function is being called. However, in a more complicated program, where the functions have behaviors or return values that aren’t printed, such 
issues can be very difficult to debug.

To help address the issue of functions that are meant to be overrides but aren’t, C++11 introduced the override specifier. The override specifier can be 
applied to any override function by placing the specifier in the same place const would go. If the function does not override a base class function 
(or is applied to a non-virtual function), the compiler will flag the function as an error.

There is no performance penalty for using the override specifier, and it helps avoid inadvertent errors. Consequently, we highly recommend using it for 
every virtual function override you write to ensure you’ve actually overridden the function you think you have.

Rule: Apply the override specifier to every intended override function you write.
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

class Derived: public Base
{
    public:
    /*
    int Get_Value(short int x)  override    //Error:'int Derived::Get_Value(short int)' marked 'override', but does not override
    {
        return 2*x;
    }
    */
    void print_Name() const override
    {
        cout<<"Derived"<<endl;
    }
};

int main()
{
    Derived d;
    Base *b=&d;
    cout<<b->Get_Value(5)<<endl;
    b->print_Name();
}