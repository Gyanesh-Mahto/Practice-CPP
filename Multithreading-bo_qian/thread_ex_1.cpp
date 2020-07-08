#include<iostream>
#include<thread>
using namespace std;

void fun_1()
{
    cout<<"Beauty is skin-deep"<<endl;
}

int main()
{
    thread t1(fun_1);   //thread t1 starts running

    //t1.join();    //main thread waits for t1 to finish
    t1.detach();    //t1 will run freely on its own

    if(t1.joinable())
    t1.join();
}