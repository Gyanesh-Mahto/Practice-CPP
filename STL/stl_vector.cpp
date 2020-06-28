#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

class Person
{
    private:
    string name;
    int age;
    friend ostream& operator<<(ostream &os, const Person &p)
    {
        os<<p.name<<":"<<p.age;
        return os;
    }

    public:
    Person(){};
    Person(string n, int a)
    {
        name=n;
        age=a;
    }
    bool operator<(Person &rhs)
    {
        return this->age<rhs.age;
    }

    bool operator==(Person &rhs)
    {
        return (this->name==rhs.name && this->age==rhs.age);
    }
};

template<typename T>
void display(vector<T> &vec)
{
    cout<<"[ ";
    for_each(vec.begin(), vec.end(), [](T x){cout<<x<<" ";});
    cout<<"]"<<endl;
}

template<typename T>
void display_1(vector<T> &vec)
{
    cout<<"[ ";
    for(auto &item:vec)
    cout<<item<<" ";
    cout<<"]"<<endl;
}


int main()
{
    vector<int> v1;

    for(int i=1; i<=5; i++)
    {
        v1.push_back(i);
    }

    for(auto i=v1.begin(); i!=v1.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

    for(auto i=v1.rbegin(); i!=v1.rend(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    for(auto i=v1.cbegin(); i!=v1.cend(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

    for(auto i=v1.crbegin(); i!=v1.crend(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;

    cout<<"Size of vector: "<<v1.size()<<endl;
    cout << "Capacity : " << v1.capacity()<<endl; 
    cout << "Max_Size : " << v1.max_size()<<endl; 

    if(v1.empty()==false)
    cout<<"Vector is not empty"<<endl;
    else
    cout<<"Vector is empty"<<endl;
    
    v1.shrink_to_fit();
    for(auto i=v1.begin(); i!=v1.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    cout << "Capacity : " << v1.capacity()<<endl;
    v1.resize(10);
    cout << "Capacity : " << v1.capacity()<<endl;
    cout<<"Reference operator: "<<v1[4]<<endl;
    cout<<"at: "<<v1.at(2)<<endl;
    cout<<"front: "<<v1.front()<<endl;
    cout<<"back: "<<v1.back()<<endl;
    int *p=v1.data();
    cout<<"First element: "<<*p<<endl;
    v1.shrink_to_fit();
    cout<<"Capacity: "<<v1.capacity()<<endl;
    cout<<"back: "<<v1.back()<<endl;
    v1.assign(5, 10);
    for(int i=0; i<v1.size(); i++)
    cout<<v1[i]<<" ";
    cout<<endl;
    cout<<"front: "<<v1.front()<<endl;
    cout<<"back: "<<v1.back()<<endl;
    v1.pop_back();
    for(int i=0; i<v1.size(); i++)
    cout<<v1[i]<<" ";
    v1.erase(v1.begin());
    for(int i=0; i<v1.size(); i++)
    cout<<v1[i]<<" ";
    v1.erase(v1.begin());
    for(int i=0; i<v1.size(); i++)
    cout<<v1[i]<<" ";
    v1.clear();
    cout<<"Size: "<<v1.size()<<endl;
    cout<<"==============================================================================="<<endl;
    vector<int> v{1,2,3,4,5,6,7,8};
    display(v);
    display_1(v);
    vector<int> vec(10,100);
    display(vec);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    cout<<vec.max_size()<<endl;
    vec.push_back(101);
    display(vec);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    cout<<vec.max_size()<<endl;
    vec.shrink_to_fit();
    display(vec);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    cout<<vec.max_size()<<endl;
    vec.reserve(100);
    display(vec);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    cout<<vec.max_size()<<endl;
    vec[15]=102;
    //vec.at(15)=106;
    display(vec);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    cout<<vec.max_size()<<endl;

    vector<Person> stooges;
    Person p1{"Larry", 18};
    display(stooges);
    stooges.push_back(p1);
    display(stooges);
    cout<<stooges.size()<<endl;
    cout<<stooges.capacity()<<endl;
    cout<<stooges.max_size()<<endl;
    stooges.push_back(Person("Raghav", 25));
    display(stooges);
    cout<<stooges.size()<<endl;
    cout<<stooges.capacity()<<endl;
    cout<<stooges.max_size()<<endl;
    stooges.push_back(Person("Yuyutsu", 22));
    display(stooges);
    cout<<stooges.size()<<endl;
    cout<<stooges.capacity()<<endl;
    cout<<stooges.max_size()<<endl;

    vector<Person> P{{"Keshav", 29}, {"Pawan", 26}};
    display(P);
    cout<<P.size()<<endl;
    cout<<P.capacity()<<endl;
    cout<<P.max_size()<<endl;
    cout<<P.front()<<endl;
    cout<<P.back()<<endl;
    P.emplace_back("Yuyutsu", 28);
    display(P);
    cout<<P.front()<<endl;
    cout<<P.back()<<endl;
    P.pop_back();
    display(P);

    P.clear();
    display(P);
}
