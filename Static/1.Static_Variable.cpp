#include<iostream>
using namespace std;

void fun()
{
    static int x=0;
    cout<<x++<<endl;
}

int main()
{
    for(int i=0; i<5; i++)
    fun();
}