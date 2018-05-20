#include<iostream>
using namespace std;
class weightKg{
private:
	float x;
public:
	weightKg():x(0){}
	weightKg(float z):x(z){}
	void show()
	{
		cout<<"In Kg: \n";
		cout<<x<<endl;
	}
	float getKg()
	{
		return x;
	}
};
class weightGm{
private:
	float x;
public:
	weightGm():x(0){}
	void show()
	{
		cout<<"In Gram: ";
		cout<<x<<endl;
	}
	weightGm(weightKg dist)
	{
		float y;
		y=dist.getKg();
		x=y*1000;
	}
};

int main()
{
	float s;
	cout<<"\nEnter weight in kilogram: ";
	cin>>s;
	weightKg Kg(s);
	Kg.show();
	weightGm Gm;
	Gm=Kg;
	Gm.show();
	return 0;
}
