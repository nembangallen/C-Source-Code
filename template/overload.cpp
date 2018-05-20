#include<iostream>
using namespace std;
template <class T>
void get(T x)
{ 
	cout<<"With one param x="<<x<<endl;
}
template<class T1,class T2>
void get(T1 x,T2 y)
{
	cout<<"Function with two params x="<<x<<"and y="<<y<<endl;
} 

template<class T3>
void get(T3 x,int y)
{
	cout<<"Overloading Template Function x="<<x<<", y="<<y<<endl;
}
int main()
{	
	get(10);
	get(10.3);
	get('A');
	get(6,7);
	get(12.7,23.4);
	return 0;
}
