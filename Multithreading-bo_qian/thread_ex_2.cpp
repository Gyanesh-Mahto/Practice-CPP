#include<iostream>
#include<thread>
using namespace std;

void fun_1()
{
    cout<<"Beauty is only skin-deep"<<endl;
}

int main()
{
    thread t1(fun_1);

    try
    {
    for(int i=0; i<100; i++)
    cout<<"From main: "<<i<<endl;
    }catch(...)
    {
    t1.join();
    throw;
    }

    t1.join();
}