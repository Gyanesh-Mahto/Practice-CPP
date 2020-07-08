#include<iostream>
#include<thread>
using namespace std;

void fun_1()
{
    cout<<"Beauty is only skin-deep"<<endl;
}

class Fctor
{
    public:
    void operator()(string& msg)
    {
        cout<<"t1 says: "<<msg<<endl;
        msg="Trust is the mother of deceit";
        cout<<this_thread::get_id()<<endl;
    }
};

int main()
{
    string s="where there is no trust, there is no love";
    thread t1((Fctor()), ref(s));
    cout<<t1.get_id()<<endl;
    t1.join();
    cout<<"From main: "<<s<<endl;
    cout<<this_thread::get_id()<<endl;
    cout<<thread::hardware_concurrency()<<endl;
}