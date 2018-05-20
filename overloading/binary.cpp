#include<iostream>
using namespace std;
class Rectangle
{
	private:
	int L,B;
	public:
			Rectangle():L(0),B(0){}           //Default Constructor
			Rectangle(int x,int y):L(x),B(y){}         //Parameterize Constructor
			Rectangle operator+(Rectangle Rec)      //Binary operator overloading func.
			{
				Rectangle temp;

				temp.L = L + Rec.L;
				temp.B = B + Rec.B;

				return temp;
			}

			void Display()
			{
				cout<<"\nLength : "<<L;
				cout<<"\nBreadth : "<<B;
			}

};

int main()
{

	Rectangle R1(2,5),R2(3,4),R3;
	//Creating Objects

	cout<<"Rectangle 1 : ";
	R1.Display();

	cout<<"\nRectangle 2 : ";
	R2.Display();

	R3 = R1 + R2;   

	cout<<"\nSum of Rectangle 1 and 2: ";
	R3.Display();
	cout<<endl;

	return 0;
}
