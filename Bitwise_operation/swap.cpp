#include <iostream>

using namespace std;

int swap(int x)
{
    int x1 = (x<<8) & (0xff00);//0x1200
    int x2 = (x>>8) & (0x00ff);//0x0034
    x = x1 | x2;
    return x;
}

int main()
{
    int x = 0x1234;
    cout<<hex<<x<<endl;
    x=swap(x);
    cout<<hex<<x<<endl;
    return 0;
}