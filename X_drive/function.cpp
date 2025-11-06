#include<iostream>
using namespace std;
class complex1
{
    float real,imag;
    public:
    void getdata()
{
    cout<<"enter the real & imag";
    cin>>real>>imag;
}
void putdata()
{
    if(imag>=0)
    cout<<real<<"+"<<imag<<"i"<<endl;
else
cout<<real<<"-"<<imag<<"i"<<endl;
}
void sum(complex1 a,complex1 b)
{
    real=a.real+b.real;
    imag=a.imag+b.imag;
}
};
int main()
{
complex1 x,y,z;
x.getdata();
y.getdata();
z.sum(x,y);
x.putdata();
y.putdata();
z.putdata();
}
