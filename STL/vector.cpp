#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    int i;

    cout<<"Vector Size: "<<v.size()<<endl;

    for(i=0; i<5; i++)
    {
        v.push_back(i);
    }

    cout<<"Vector Size: "<<v.size()<<endl;

    for(i=0; i<5; i++)
    {
        cout<<" "<<v[i];
    }
    cout<<endl;

    vector<int>::iterator it= v.begin();
    while(it!=v.end())
    {
        cout<<" "<<*it;
        it++;
    }
    cout<<endl;
}

/*
Here are following points to be noted related to various functions we used in the above example:
The push_back( ) member function inserts value at the end of the vector, expanding its size as needed.
The size( ) function displays the size of the vector.
The function begin( ) returns an iterator to the start of the vector.
The function end( ) returns an iterator to the end of the vector.
*/