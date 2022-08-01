// without using class calculating the volume of different objects.

#include<iostream>
using namespace std;

float volume(float len,float b,float hei)//rectangular box
{
    return(len*b*hei);
}
float volume(float r,float h)//cylinder
{
    return(r*h);
}
float volume(float l)//cube
{
    return(l*l*l);
}
int main()
{
    float l,b,h,len,hei,r;
    cout<<"Enter Length, Breadth & Height of rectangular box :"<<endl;
    cin>>len>>b>>hei;
    cout<<"The volume of rectangular box is : "<<volume(len,b,hei)<<endl;
    cout<<"Enter radius and height of cylinder :"<<endl;
    cin>>r>>h;
    cout<<"The volume of cylinder is : "<<volume(r,h)<<endl;
    cout<<"Enter length of square :"<<endl;
    cin>>l;
    cout<<"The volume of the square is : "<<volume(l)<<endl;
    return 0;
}