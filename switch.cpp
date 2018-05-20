#include <iostream>
using namespace std;
class Number
{
	public:
		int n1,n2;
	public:
		void check()
		{	
			char a;
			cout<<"Select an operator (+, -, *, /): "<<endl;
			cin>>a;
			switch(a)
			{
				case '+':
				cout<<"The sum of two operands is: "<<n1+n2<<endl;
				break;

				case '-':
				cout<<"The difference of two operands is:"<<n1-n2<<endl;
				break;

				case '*':
				cout<<"The produt of two numbers is:"<<n1*n2<<endl;
				break;

				case '/':
				cout<<"The divison of two operands is:"<<n1/n2<<endl;
				break;

				default:
				cout<<"Error! Operator is not correct"<<endl;
				break;
			}
		}
};

int main()
{	
	Number obj;
	cout<<"Enter two numbers:"<<endl;
	cin>>obj.n1>>obj.n2;
	obj.check();
	return 0;
}