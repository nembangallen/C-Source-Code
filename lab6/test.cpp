#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
int main()
{
	int hr,min,r,q,sec,s,t;
	string st;
	// int hrs,mins;
	cout<<"Enter time in 24 format:"<<endl;
	cin>>hr>>min>>sec;
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
	if (hr==0)
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


	// if(hr==24)
	// {
	// 	hr=0;
	// 	// min=min;
	// 	st="AM";
	// }else if(hr==12)
	// {
	// 	hr=hr;
	// 	st="PM";
	// }else if(hr>12 && hr<24)
	// {
	// 	hr=hr-12;
	// 	st="PM";
	// }else if(hr>24)
	// {
	// 	cout<<"Invalid"<<endl;
	// 	exit(0);
	// }
	// else{
	// 	hr=hr;
	// 	st="AM";
	// }
	cout<<"Time: "<<hr<<":"<<min<<"Second: "<<sec<<st<<endl;
	
	return 0;
}