#include <iostream>
using namespace std;

#define checkEvenOdd(n) \
        if((n%2)!=0) {\
        cout<<"ODD"<<endl;\
        }\
        else {\
        cout<<"EVEN"<<endl;\
        }

int main()
{
    checkEvenOdd(6);

    return 0;
}
