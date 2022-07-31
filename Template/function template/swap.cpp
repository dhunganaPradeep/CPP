#include<iostream>
using namespace std;
template <typename T>
void swapvar(T &x,T &y)
{
T temp;
temp=x;
x=y;
y=temp;
}
int main()
{
int i1=10,i2=20;
float f1=5.5,f2=8.2;
cout <<"Before swapping"<<endl;
cout <<"i1="<<i1<<" "<<"i2="<<i2<<endl;
cout <<"f1="<<f1<<" "<<"f2="<<f2<<endl;
swapvar(i1,i2);
swapvar(f1,f2);
cout<<"After swapping"<<endl;
cout<<"i1="<<i1<<" "<<"i2="<<i2<<endl;
cout<<"f1="<<f1<<" "<<"f2="<<f2<<endl;
return 0;
}