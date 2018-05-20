/*
	Program: Write a program that shows inheritance concept and catching of child and parent objects with proper example.
	Author: Allen Nembang
*/
#include<iostream>
using namespace std;
class ABC{
	protected:
		char name[15];
		int age;
};
class abc:public ABC{
	float height;
	float weight;
	public:
		void getdata()
		{
			cout<<"\nEnter name and age:";
			cin>>name>>age;
			if(age<=0)
				throw ABC();
			cout<<"\nEnter height and weight:";
			cin>>height>>weight;
			if(height<=0 || weight<=0)
				throw abc();
		}
		void show()
		{
			cout<<"\nName: "<<name<<"\nAge: "<<age<<endl;
			cout<<"\nHeight: "<<height<<"Feets"<<"\nWeight"<<weight<<"Kg"<<endl;
		}
};
int main()
{
	try{
		abc x;
		x.getdata();
		x.show();
	}
	catch(abc){
		cout<<"\nWrong height or weight";
	}
	catch(ABC){
		cout<<"\nWrong Age";
	}
	
}
