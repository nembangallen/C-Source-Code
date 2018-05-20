#include<iostream>
using namespace std;
class Test{
    public:
        void display(int p)
        {
            cout<<"Entered number is: "<<p<<endl;
        }
        void display(int q,int r)
        {
            cout<<"Entered two integer numbers are: "<<q<<" and "<<r<<endl;
        }
        void display(double s)
        {
            cout<<"Entered double number is: "<<s<<endl;
        }
        void display(char t)
        {
            cout<<"Entered character is: "<<t<<endl;
        }
};
int main()
{
    Test obj;
    obj.display('A');
    obj.display(1);
    obj.display(1,2);
    obj.display(3.6);
    return 0;

}