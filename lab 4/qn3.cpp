#include <iostream>
using namespace std;

int X; //Global variable

//prototype of test()
int & test();

int main()
{
    X = 100;
    
    int Y;
    
    Y = test();
    cout<<"1.Value of X is : "<< Y<<endl;
    
    test() = 200;
    
    Y = test();
    cout<<"2.Value of X is : "<< Y<<endl;
        
    return 0;    
}

//Definition of test()
int & test()
{
    return X;    
}