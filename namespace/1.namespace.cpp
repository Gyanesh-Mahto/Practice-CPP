#include<iostream>
using namespace std;

namespace fun_1
{
void fun()
{
    cout<<"Function - 1"<<endl;
}
}

namespace fun_2
{
void fun()
{
    cout<<"Function - 2"<<endl;
}
}

int main()
{
    fun_1::fun();
    fun_2::fun();
}
/*
O/P:
----
Function - 1
Function - 2
*/