//returning object from function

#include<iostream>
using namespace std;

class Complex
{
    int real,imag;
    public:
    void read()
    {
        cout<<"Enter the real and imaginary number"<<endl;
        cin>>real>>imag;
    }
    void display()
    {
        cout<<"The number is :"<<real<<"+"<<imag<<"i"<<endl;
    }
    void add(Complex);
};
void Complex::add(Complex c2)
{
    Complex c;
    c.real=real+c2.real;
    c.imag=imag+c2.imag;
    cout<<"The resultant number is : "<<c.real<<"+"<<c.imag<<"i"<<endl;
}
int main()
{
    Complex c1,c2;
    c1.read();
    c1.display();
    c2.read();
    c2.display();
    c1.add(c2);
    return 0;
}

