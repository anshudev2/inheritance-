#include<iostream>
using namespace std;
class A{
    public:
    int a,b;
    void getnumber(){
        cout<<"\n\nEnter Number:\t";
        cin>>a;
    }
};
class B:public A{
    public:
    void square(){
        getnumber();
        cout<<"\n\n\tSquare of the number:\t"<<(a*a);
    }
};
class C:public A
{
    public:
    void cube(){
        getnumber();
        cout<<"\n\n\t Cube of the number:::\t"<<(a*a*a);
    }
};
int main(){
    B b1;
    b1.square();
    C c1;
    c1.cube();
}