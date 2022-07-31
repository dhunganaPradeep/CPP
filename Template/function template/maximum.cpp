//multiple parameters
#include<iostream>
using namespace std;

template<typename T1,typename T2>
void max(T1 a,T2 b)
{
    if(a>b)
    {
        cout<<a<<" is greater."<<endl;
    }
    else{
        cout<<b<<" is greater."<<endl;
    }
}
int main()
{
    int a=10,b=20;
    float x=20.2,y=1.2;
    cout<<"Before :"<<endl;
    cout<<"Integer numbers are :"<<endl;
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    cout<<"Float numbers are :"<<endl;
    cout<<"x = "<<x<<endl<<"y = "<<y<<endl;
    cout<<"After :"<<endl;
    max<int,int>(a,b);
    max<float,float>(x,y);
    max<int,float>(a,y);
    
    //OR

    // max<int,int>(10,20);
    // max<float,float>(10.2,1.2);
    // max<int,float>(10,1.2);
    
    return 0;
}