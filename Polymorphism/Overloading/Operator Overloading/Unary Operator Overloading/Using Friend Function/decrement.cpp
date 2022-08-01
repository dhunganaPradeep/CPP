// vector decrement using freind function
#include <iostream>
using namespace std;

class Hello
{
    int a, b, c;

public:
    Hello()
    {
        cout << "Enter the value of a,b & c:" << endl;
        cin >> a >> b >> c;
    }
    Hello(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
      void display()
    {
        cout<<a<<"i+"<<b<<"j+"<<c<<"k"<<endl;
    }
    friend void operator --(Hello&);
};

void operator --(Hello&s)
{
    s.a=--s.a; // s.a=s.a--(PostFix)
    s.b=--s.b; // s.b=s.b--(PostFix)
    s.c=--s.c; // s.c=s.c--(PostFix)
}

int main()
{
    Hello h1;
    cout<<"Before decrement "<<endl;
    h1.display();
    cout<<"After decrement "<<endl;
    --h1;  //h1--(Postfix)
    h1.display();
    return 0;
}