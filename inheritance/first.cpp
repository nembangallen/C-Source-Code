#include<iostream>
using namespace std;

class pare{
protected:
	int count ;
public:
	pare(): count(0){
		cout<<"parent"<<endl;
	}
	pare(int c): count (c){
	}
	int get(){
		return count;
	}
	pare operator ++ (){
		return pare(++count);
	}
};

class child: public pare{
	//protected:
	//	int count;
public:
	child(){
		cout<<"child "<<endl;
	}
	pare operator -- (){
		return pare(--count);
	}
};

int main(){
	child c1;
	cout<< c1.get();
	
	++c1;
	++c1;
	++c1;
	cout << c1.get();
	--c1;
	--c1;
	cout << c1.get()<<endl;
	return 0; 
}