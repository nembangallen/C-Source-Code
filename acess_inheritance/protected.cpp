#include<iostream>
using namespace std;
class Base{
private:
    int x;
protected:
    int y;
public:
    int z;
    Base():x(1),y(2),z(3){}    
};
class Derived: protected Base{
    public:
        void showData()
        {
            cout<<"x is not accessible"<<endl;
            cout<<"Value of y is: "<<y<<endl;
            cout<<"Value of z is: "<<z<<endl;
        }
};
int main()
{
    Derived obj;
    obj.showData();
    return 0;
}