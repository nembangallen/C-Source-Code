#include <iostream>

using namespace std;

class TWO; // forward declaration of class TWO

class ONE{
public:
    void fun(TWO); // member function declaration
};

class TWO{
private:
    int value; // private field
public:
    friend void ONE::fun(TWO); // friend function declaration
};

void ONE::fun(TWO two)  // function definition
{
    two.value=10;    // accessing private field
    cout<<two.value<<endl;
}

int main(){
	ONE one;
	TWO two;
	one.fun(two);
	return 0;
}