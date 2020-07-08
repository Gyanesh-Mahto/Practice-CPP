#include<iostream>
#include<thread>
#include<mutex>
#include<string>
using namespace std;

mutex mu;

void shared_print(string msg, int id)
{
    mu.lock();
    cout<<msg<<id<<endl;
    mu.unlock();
}

void fun_1()
{
    for(int i=0; i>-100; i--)
    shared_print(string("from t1: "), i);
}

int main()
{
    thread t1(fun_1);
    for(int i=0; i<100; i++)
    shared_print(string("from main: "), i);
    t1.join();
}