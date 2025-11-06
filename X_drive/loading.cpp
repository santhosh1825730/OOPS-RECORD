#include<iostream>
using namespace std;
class calculator
{
public:
int add(int a,int b)
{
    return(a+b);
}
double add(double a,double b)
{
    return(a+b);
}
int add(int a,int b,int c)

{
return(a+b+c);
}
};
int main()
{
    calculator c;
    int result1=c.add(10,20);
    cout<<"the addition of 2 integers"<<result1;
    double result2=c.add(5.2,4.6);
    cout<<"the addition of double numbers"<<result2;
    int result3=c.add(10,20,30);
    cout<<"the addition of 3 numbers"<<result3;
}