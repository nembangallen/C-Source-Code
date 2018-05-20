#include<iostream>
#include<math.h>
using namespace std;
class Number{
	private:
		double num;
	public:
		class NEG{}; //exception class
		void readNum();
		double sqRoot();		
};
void Number::readNum(){
	cout<<"Enter num"<<endl;
	cin>>num;
}
double Number::sqRoot()
{
	if(num<0)
		throw NEG();
	else
		return (sqrt(num));
}
int main()
{
	Number n1;
	double res;
	n1.readNum();
	try{
		cout<<"Finding sq.root"<<endl;
		res=n1.sqRoot();
		cout<<"Square root is: "<<res<<endl;
		cout<<"No exception is raised."<<endl;
	}
	catch(Number::NEG)
	{
		cout<<"Square root of negative number.Redifining math, are you?"<<endl;
	}
	return 0;
}


