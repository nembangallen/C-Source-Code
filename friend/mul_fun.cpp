#include<iostream>
using namespace std;
class B;
class A{
    private:
        int numA;
    public:
        A():numA(12){}
        friend int add(A, B);
};
class B{
    private:
        int numB;
    public:
        B():numB(2){}
        friend int add(A,B);
};

int add(A a1,B b1)
{
    return (a1.numA * b1.numB);
}
int main()
{
     A objA;
     B objB;
     cout<<"Product: "<<add(objA,objB)<<endl;
     return 0;
}