#include<iostream>
using namespace std;
int main(){

	int i = 7,j,k,l;
	j=0;
	k=0;
	l=4;
	do{
		j=i;
		k=l;
		while(j<=7){
			while(k>=1){
				cout<<" ";
				k--;
			}
			
			cout<<"*";
			j++;
			
			
		}
		cout<<endl;
		cout<<endl;
		l--;
		i=i-2;
	}while(i>=1);
	return 0;
}

