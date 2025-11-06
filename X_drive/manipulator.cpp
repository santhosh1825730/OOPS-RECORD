#include<iostream>
using namespace std;
class addition1
{
int a,b,sum;
public:
void read()
{
    cout<<"enter two numbers";
    cin>>a>>b;
}
void cal()
{
    sum:a+b;
}
void display()
{
   cout<<"the result is"<<sum;
}
};
main()
{
addition1 a;
a.read();
a.cal();
a.display();
}

