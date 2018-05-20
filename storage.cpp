#include<iostream>
using namespace std;
int g;    //global variable, initially holds 0

void test_function()
{
    static int s;    //static variable, initially holds 0
    register int r;    //register variable
    r=5;
    s=s+r*2;
    cout<<"Inside test_function"<<endl;
    cout<<"g = "<<g<<endl;
    cout<<"s = "<<s<<endl;
    cout<<"r = "<<r<<endl;
}

int main()
{
    int a;    //automatic variable
    g=25;
    a=17;
    test_function();
    cout<<"Inside main"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"g = "<<g<<endl;
    test_function();
    return 0;
}