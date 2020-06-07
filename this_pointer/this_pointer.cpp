#include <iostream>
using namespace std;

class Car
{
    public:
    int Number_of_wheels;
    int Number_of_passengers;
    void getinfo(int x, int y)
    {
        this->Number_of_wheels = x;
        this->Number_of_passengers = y;
    }       
    void showinfo()
    {
        cout<<"Number of Wheels = "<<Number_of_wheels<<"\n";
        cout<<"Number of Passengers = "<<Number_of_passengers<<"\n";
        cout<<"Address of current object: "<<this<<endl; 
    }
};
int main()
{
    Car car;
    Car *ptr;
    ptr=&car;
    ptr->getinfo(4,5);
    ptr->showinfo();
    Car car2;
    car2.getinfo(6,8);
    car2.showinfo();
}
/*
O/P:
----
Number of Wheels = 4
Number of Passengers = 5
Address of current object: 0x72fe10
Number of Wheels = 6
Number of Passengers = 8
Address of current object: 0x72fe00
*/
