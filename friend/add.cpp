#include<iostream>
using namespace std;
class B;
class A{
    private:
        int numA;
    public:
        A(int x):numA(x){}
        friend int add(A,B);
};
class B{
    private:
        int numB;
    public:
        B(int y):numB(y){}
        friend int add(A,B);
};
int add(A a1,B b1)
{   
    return (a1.numA+b1.numB);
}
int main()
{
    int a,b;
    cout<<"Enter two integers: "<<endl;
    cin>>a>>b;
    A objA(a);
    B objB(b);
    cout<<"Sum of two numbers are: "<<add(objA,objB)<<endl;
    return 0;
}