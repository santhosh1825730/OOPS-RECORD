#include<iostream>
using namespace std;
class demo{
    static int count;
    public:
    static void display(){
        cout<<"count="<<count<<endl;
    }
};
int demo::count=10;
int main(){
    demo::display();
    return 0;
}