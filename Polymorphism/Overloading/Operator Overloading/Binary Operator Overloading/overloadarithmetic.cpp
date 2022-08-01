// Write a program to overload the arithmetic operators(+,-,*./)

#include <iostream>
using namespace std;

class Arithmetic
{
    int num;

public:
Arithmetic(){};
    void read()
    {
        cout << "Enter the number " << endl;
        cin >> num;
    }
    Arithmetic(int n)
    {
        num = n;
    }
    void display()
    {
        cout<<num<<endl;
    }
    Arithmetic operator+(Arithmetic b)
    {
        Arithmetic temp;
        temp.num = num + b.num;
        return temp;
    }
    Arithmetic operator-(Arithmetic b)
    {
        Arithmetic temp;
        temp.num = num - b.num;
        return temp;
    }
    Arithmetic operator*(Arithmetic b)
    {
        Arithmetic temp;
        temp.num = num * b.num;
        return temp;
    }
    Arithmetic operator/(Arithmetic b)
    {
        Arithmetic temp;
        temp.num = num / b.num;
        return temp;
    }
};

int main()
{
    Arithmetic a, b, c=0;
    a.read();
    b.read();
    c = a + b;
    cout << "Addition of two objects = " << endl;
    c.display();
    c = a - b;
    cout << "Subtraction of two objects = " << endl;
    c.display();
    c = a * b;
    cout << "Multiplication of two objects = " << endl;
    c.display();
    c = a / b;
    cout << "Division of two objects = " << endl;
    c.display();
    return 0;
}