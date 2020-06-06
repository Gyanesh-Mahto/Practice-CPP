#include<iostream>
using namespace std;

class example
{
    public:
    int x{100};
    int y{200};
    static int z;

    int get_z()
    {
        return z;
    }
    int get_x()
    {
        return x;
    }
    static int static_get_z()
    {
        //return x; //Error: a nonstatic member reference must be relative to a specific object
        //return y;   //Error: a nonstatic member reference must be relative to a specific object
        return z;   //Works perfectly fine
    }
};

int example::z=1;

int main()
{
    example ex1;
    cout<<ex1.get_x()<<endl;    //100
    cout<<ex1.get_z()<<endl;    //1
    cout<<ex1.static_get_z()<<endl; //1
    cout<<example::static_get_z()<<endl;    //1
    //cout<<example::get_x()<<endl; //a nonstatic member reference must be relative to a specific object
}