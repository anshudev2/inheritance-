#include<iostream>
using namespace std;
class A{
    public:
    int a,b;
    void get(){
        cout<<"Enter any two Number:"<<endl;
        cin>>a>>b;
    }
};
class B:public A
{
    public:
    int c;
    void add(){
        c=a+b;
    }
};
class C:public B{
    public:
    void show(){
        cout<<a<<"+"<<b<<"="<<c;
    }
};
int main(){
    C c;
    c.get();
    c.add();
    c.show();
}