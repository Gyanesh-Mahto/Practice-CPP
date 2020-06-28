#include<iostream>
#include<array>
#include<iterator>
#include<algorithm>
#include<numeric>
using namespace std;

void display(array<int, 5> &arr)
{
    cout<<"[ ";
    for(auto &i:arr)
    cout<<i<<" ";
    cout<<"]"<<endl;
}



int main()
{
    array<int, 5> arr1{1,2,3,4,5};
    array<int, 5> arr2;
    display(arr1);
    display(arr2);
    arr2={6,7,8,9,10};
    display(arr1);
    display(arr2);
    arr1[0]=1000;
    arr1.at(1)=2000;
    display(arr1);
    display(arr2);
    cout<<"Front of arr1: "<<arr1.front()<<endl;
    cout<<"Front of arr2: "<<arr2.front()<<endl;
    cout<<"Back of arr1: "<<arr1.back()<<endl;
    cout<<"Back of arr2: "<<arr2.back()<<endl;
    arr1.fill(0);
    display(arr1);
    display(arr2);
    arr1.swap(arr2);
    display(arr1);
    display(arr2);
    arr2.fill(1);
    display(arr2);
    int *p=arr1.data();
    cout<<p<<endl;
    cout<<*p<<endl;
    *p=1000;
    display(arr1);
    sort(arr1.begin(), arr1.end());
    display(arr1);
    array<int, 5>::iterator min_num=min_element(arr1.begin(), arr1.end());
    cout<<"Min element: "<<*min_num<<endl;
    array<int, 5>::iterator max_num=max_element(arr1.begin(), arr1.end());
    cout<<"Max element: "<<*max_num<<endl;
    arr1={1,2,3,13,4};
    array<int, 5>::iterator adjacent_num=adjacent_find(arr1.begin(), arr1.end());
    if(adjacent_num != arr1.end())
    cout<<"Adjacent found: "<<*adjacent_num<<endl;
    else
    cout<<"Adjacent not found"<<endl;
    int sum=accumulate(arr1.begin(), arr1.end(), 0);
    cout<<"Total sum: "<<sum<<endl;
    int count=count_if(arr1.begin(), arr1.end(), [](int x){return x>=10 && x<=15;});
    cout<<"Matches Found: "<<count<<endl;
}