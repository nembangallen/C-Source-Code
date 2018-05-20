#include <iostream>
using namespace std;
class Complex{
private:
	float real,imag;
public:
	Complex():real(0),imag(0){}
	void input()
	{
		cout<<"Enter real and imaginary part respectively: ";
		cin>>real;
		cin>>imag;
	}
	Complex operator +(Complex c)
	{
		Complex temp;
		temp.real=real+c.real;
		temp.imag=imag+c.imag;
		return temp;
	}
	void show()
	{
		if(imag<0)
			cout<<"Sum of two complex numbers: "<<real<<imag<<" i"<<endl;
		else
			cout<<"Sum of two complex numbers: "<<real<<" + "<<imag<<" i"<<endl;
	}
};
int main()
{
	Complex c1,c2,result;
	cout<<"First Complex number: \n";
	c1.input();
	cout<<"Second Complex number: \n";
	c2.input();
	result=c1+c2;
	result.show();
	return 0;
}