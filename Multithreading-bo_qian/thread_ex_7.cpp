#include<iostream>
#include<thread>
#include<mutex>
#include<string>
#include<fstream>
using namespace std;

class LogFile
{
    mutex mu;
    ofstream f;
    
    public:
    LogFile()
    {
        f.open("log.txt");
    }
    void shared_print(string msg, int id)
    {
        lock_guard<mutex> guard(mu);
        //mu.lock();
        cout<<"from: "<<msg<<":"<<id<<endl;
        //mu.unlock();
    }
};

void fun_1(LogFile &log)
{
    for(int i=0; i>-100; i--)
    log.shared_print(string("from t1: "), i);
}

int main()
{
    LogFile log;
    thread t1(fun_1, ref(log));
    for(int i=0; i<100; i++)
    log.shared_print(string("from main: "), i);
    t1.join();
}