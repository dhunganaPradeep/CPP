//swap the private data of different classes.Where member function of one class is friend with another

#include<iostream>
using namespace std;

class Two;
class One
{
    int num;
    public:
    void read()
    {
        cout<<"enter the value : "<<endl;
        cin>>num;
    }
    void display()
    {
        cout<<"value is : "<<num<<endl;
    }
    void swap(Two&);
};
class Two
{
    int num;
    public:
    void read()
    {
        cout<<"enter the value : "<<endl;
        cin>>num;
    }
    void display()
    {
        cout<<"value is : "<<num<<endl;
    }
    friend void One::swap(Two&);
};
void One::swap(Two&obj)
{
    int temp;
    temp=num;
    num=obj.num;
    obj.num=temp;
}
int main()
{
    One obj1;
    Two obj2;
    obj1.read();
    obj1.display();
    obj2.read();
    obj2.display();
    obj1.swap(obj2);
    cout<<"Swap"<<endl;
    obj1.display();
    obj2.display();
    return 0;
}
