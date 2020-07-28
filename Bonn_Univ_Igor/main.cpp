#include"functions.cpp"
int main()
{
    int sum_int=Sum(1,2);
    cout<<sum_int<<endl;
    float sum_float=Sum(1.3f,2.5f);
    cout<<sum_float<<endl;
    string sum_string=Sum("Hello ", "World");
    cout<<sum_string<<endl;
}