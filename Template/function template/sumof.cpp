//sum of two integers and float
#include<iostream>
using namespace std;

template<typename T>

void sum(T a,T b)
{
    T s;
    s=a+b;
    cout<<"Sum ="<<s<<endl;
}
int main()
{
    // sum<int>(10,20);
    // sum<float>(11.2,12.2);

    //OR

    int a,b;
    float x,y;
    cout<<"Enter two integer numbers :"<<endl;
    cin>>a>>b;
    sum(a,b);
    cout<<"Enter two float numbers :"<<endl;
    cin>>x>>y;
    sum(x,y);

    return 0;
}