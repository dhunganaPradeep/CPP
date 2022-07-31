// If denum is zero

#include<iostream>
using namespace std;

int main()
{
    float a,b,div;
    cout<<"Enter value of a and b :"<<endl;
    cin>>a>>b;
    try
    {
        if(b!=0)
        {
            div=a/b;
            cout<<"The divided value is : "<<div<<endl;
        }
        else{
            throw (b);
        }
    }
    catch(float)
    {
        cout<<"ERROR DIVISION BY ZERO :)"<<endl;
    }
    cout<<"Last statement";
    return 0;
}