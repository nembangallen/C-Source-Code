#include<iostream>
using namespace std;
int main(){

	int i = 5,j=0;
	do{
		j=i;
		while(j<=5){
			cout<<i;
			j++;
		}
		cout<<endl;
		cout<<endl;
		i--;
	}while(i>=1);
	return 0;
}

