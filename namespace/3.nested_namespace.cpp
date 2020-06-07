#include<iostream>
using namespace std;

namespace fun_1
{
void fun()
{
    cout<<"Function - 1"<<endl;
}
namespace fun_2
{
void fun()
{
    cout<<"Function - 2"<<endl;
}
}
}

int main()
{
    fun_1::fun_2::fun();
    fun_1::fun();
}
/*
O/P:
----
Function - 2
Function - 1
*/