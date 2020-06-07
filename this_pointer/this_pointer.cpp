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