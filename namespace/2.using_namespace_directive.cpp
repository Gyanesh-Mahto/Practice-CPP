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

using namespace fun_1;  //using namespace directive

int main()
{
    fun();
}
/*
O/P:
----
Function - 1
*/