//this is just a demo program write another 
//example because in multiplication we can multiply it by zero 
//and this program is just to demonstrate 
//multiple try and catch blocks.
#include<iostream>

using namespace std;
int main()
{
    float a,b,div;
    int c,d,mul;
    cout<<"Enter the value of a & b : "<<endl;
    cin>>a>>b;
    cout<<"Enter the value of c & d : "<<endl;
    cin>>c>>d;

    try
    {
        if(b!=0)
        {
            div=a/b;
            cout<<"Divided value = "<<div<<endl;
        }
        else{
            throw(b);
        }

    }
    catch(float)
    {
        cout<<"denum value cannot be zero."<<endl;
    }
    try
    {
        if(d!=0)
        {
            mul=c*d;
            cout<<"Multiplied value"<<mul<<endl;
        }
        else{
            throw(d);
        }
    }
   
    //CATCH BLOCK TO HANDLE ALL EXCEPTIONS

    // catch(...)
    // {
    //     cout<<"The value cannot be zero."<<endl;
    // }

    catch(int)
    {
        cout<<"Multiplication cannot be processed.";
    }
    return 0;
}   