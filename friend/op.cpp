#include<iostream>
using namespace std;
class Test2;
class Test1{
    int a;
public:
    void get()
    {
        cout<<"Enter a value: ";
        cin>>a;
    }
    friend void operator >(Test1,Test2);
};
class Test2{
    int b;
    public:
        void getb()
        {
            cout<<"Enter b value:";
            cin>>b;
        }
        friend void operator >(Test1,Test2);
};
void operator >(Test1 t1,Test2 t2)
{
    t1.a>t2.b?cout<<"a is big":cout<<"b is big"<<endl;
}
int main()
{
    Test1 t1;
    Test2 t2;
    t1.get();
    t2.getb();
    t1>t2;
    return 0;
}