#include <iostream>
#include <stdlib.h>
using namespace std;

int fibonacci(int x){
	int num;
	if (x==0)
	{	
		cout<<"Invalid"<<endl;
		exit(0);
	}
	else if(x==1){
		return (1);
	}
	else if(x==2){
		return (1);
	}
	else
	num=fibonacci(x-1)+fibonacci(x-2);
	return num;
}

int main(){
	int term;
	cout<<"Fibonacci Series is:"<<endl;
	cout<<"1,1,2,3,5,8,13,21,........terms"<<endl;
	cout<<"\nEnter the nth term of the fibonacci series:";
	cin>>term;
	
	cout<<"The "<<term<<"th term of the fibonacci series is :"<<fibonacci(term)<<endl;
	return 0;
}
