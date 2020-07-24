/*
In this exercise you will write a small “guessing” game. The program will pick a random number
from 0 to 99 and you will be guessing this number by providing your guess through stdin. Depending on
which number you have guessed there are 3 outcomes:
• You have guessed the number. Then the program has to tell you that you have won.
• Your number if larger than the target one. The program should tell you that it’s number is smaller.
• Your number is smaller than the target one. The program should tell you that its number is larger.
The game goes on until you have guessed the number.
Make sure to save your cpp file in homework 1/task 2/guessing game.cpp
Tip: To generate a random number you can use rand function to keep things simple:
http://en.cppreference.com/w/cpp/numeric/random/rand
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    while(1)
    {
    int val;
    cout<<"Please enter your guessed number:"<<endl;
    cin>>val;
    rand();
    static int random_variable=rand()%100;
    if(random_variable==val)
    {
        cout<<"You have won. Both Random value and your values are same"<<endl;
        break;
    }
    else if(random_variable<val)
    {
        cout<<"Random Number is smaller. Please Guess again"<<endl;
    }
    else
    {
        cout<<"Random Number is Greater. Please Guess again"<<endl;
    }
    }
}