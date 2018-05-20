/*
* Program to convert user defined data type using constructor method
* Routine in destination object.
* Author: Allen Nembang
*/
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
class Time24{
private:
	int hr,min,sec;
public:
	Time24():hr(0),min(0),sec(0){}
	Time24(int x,int y,int z):hr(x),min(y),sec(z){}
	void show()
	{
		cout<<"Time in 24 Format: \n";
		cout<<"(Hour:Minutes:Second)= "<<hr<<":"<<min<<":"<<sec<<endl;
	}
	int getHr()
	{
		return hr;
	}
	int getMin()
	{
		return min;
	}
	int getSec()
	{
		return sec;
	}
};

class Time12{
private:
	int hr,min,sec;
	string st;
public:
	Time12():hr(0),min(0),sec(0){}
	// Time12(int x,int y):hr(x),min(y),sec(0){}
	void show()
	{
		cout<<"Time in 12 Format:\n";
		cout<<hr<<":"<<min<<":"<<sec<<" "<<st<<endl;
	}
	Time12(Time24 t)
	{	
		int q,r,s,v;
		hr=t.getHr();
		min=t.getMin();
		sec=t.getSec();

		if (sec<60)
		{
			sec=sec;
		}else if(sec==60)
		{
			min++;
			sec=0;
		}else{
			s=sec/60;
			v=sec%60;
			min=min+s;
			sec=v;
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
	}
};
int main()
{	
	int hrs,mins,secs;
	cout<<"Enter the time (Hr:Min:Sec) in 24 format: "<<endl;
	cin>>hrs>>mins>>secs;
	if (hrs>=24)
	{	
		cout<<"Invalid";
		exit(0);
	}
	Time24 t24(hrs,mins,secs);
	t24.show();
	Time12 t12;
	t12=t24;
	t12.show();
	return 0;
}
