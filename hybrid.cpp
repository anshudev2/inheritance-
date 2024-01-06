#include<iostream>
using namespace std;
class error
{
protected:
int num1, num2;
public:
void getdata()
{
cout<<"For Addition:";
cout<<"\nEnter the first number: ";
cin>>num1;
cout<<"\nEnter the second number: ";
cin>>num2;
}
};
class plu:public error
{
protected:
int sum;
public:
void add()
{
sum=num1+num2;
}
};
class min
{
protected:
int n1,n2,diff;
public:
void sub()
{
cout<<"\nFor Subtraction:";
cout<<"\nEnter the first number: ";
cin>>n1;
cout<<"\nEnter the second number: ";
cin>>n2;
diff=n1-n2;
}
};
class result:public plu, public min
{
public:
void display()
{
cout<<"\nSum of "<<num1<<" and "<<num2<<"= "<<sum; 
cout<<"\nDifference of "<<n1<<" and "<<n2<<"= "<<diff;
}
};
int main()
{
result z;
z.getdata();
z.add();
z.sub();
z.display();
}