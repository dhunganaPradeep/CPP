//Basic to basic type

#include<iostream>
using namespace std;

int main()
{
    int a;
    float b=10.59,result;
    
    a=b;//conversion of basic to another basic type

    result=(float)(a/5);
    cout<<"Result = "<<result<<endl;
    return 0;
}