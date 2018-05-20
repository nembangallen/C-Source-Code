/*
* Program to convert user defined data type using operator casting method
* Routine in source object.
* Author: Allen Nembang
*/
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
class Time12{
private:
	int hr,min,sec;
	string st;
public:
	Time12():hr(0),min(0),sec(0){}
	Time12(int x,int y,int z,string s):hr(x),min(y),sec(z),st(s){}

	void show()
	{
		cout<<"Time in 12 Format:\n";
		cout<<hr<<":"<<min<<":"<<sec<<" "<<st<<endl;
	}
};
class Time24{
private:
	int hr,min,sec;
public:
	Time24():hr(0),min(0),sec(0){}
	Time24(int p,int q,int r):hr(p),min(q),sec(r){}
	void show()
	{
		cout<<"Time in 24 Format: \n";
		cout<<"(Hour:Minutes:Sec)= "<<hr<<":"<<min<<":"<<sec<<endl;
	}
	operator Time12()
	{	
		string st;
		int q,r,s,t;


		if (sec<60)
		{
			sec=sec;
		}else if(sec==60)
		{
			min++;
			sec=0;
		}else{
			s=sec/60;
			t=sec%60;
			min=min+s;
			sec=t;
		}
		if(min<60)
		{
			min=min;
		}else if(min==60)
		{
			hr++;
			min=0;
		}else{
			q=min/60;
			r=min%60;
			hr=hr+q;
			min=r;
		}

		if (hr==0 || hr==24)
		{
			hr=12;
			st="AM";
		}else if(hr>=13 && hr<=23)
		{
			hr=hr-12;
			st="PM";
		}else if(hr==12)
		{
			hr=12;
			st="PM";
		}else{
			hr=hr;
			st="AM";
		}
		return Time12(hr,min,sec,st);

	}
};
int main()
{	
	int hrs,mins,secs;
	Time12 t12;
	cout<<"Enter the Time(hours and minutes and second) in 24 Format: ";
	cin>>hrs>>mins>>secs;
	if (hrs>=24)
	{	
		cout<<"Invalid";
		exit(0);
	}
	Time24 t24(hrs,mins,secs);
	t24.show();
	t12=t24;
	t12.show();
	return 0;
}