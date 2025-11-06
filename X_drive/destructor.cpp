#include<iostream>
using namespace std;
class marks
{
    public:
    int maths;
    int science;
    //constructor
    marks()
    {
        cout<<"inside constructor:"<<endl;
        cout<<"c++ object created:"<<endl;
    }

    //destructor
    ~marks()
    {
        cout<<"inside destuctor:"<<endl;
        cout<<"c++ object destroyed:"<<endl;
    }
};
    int main()
    {
        marks m1;
        marks m2;
        return 0;
    }
   