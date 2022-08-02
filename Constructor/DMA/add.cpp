//add two integers

#include<iostream>
using namespace std;

int main()
{
    int *ptr1=NULL;
    int *ptr2=NULL;
    ptr1=new int;
    ptr2=new int;
    cout<<"Enter first number :"<<endl;
    cin>>*ptr1;
    cout<<"Enter second number : "<<endl;
    cin>>*ptr2;
    cout<<"Sum is : "<<*ptr1+*ptr2<<endl;
    delete ptr1;
    delete ptr2;
    return 0;
}