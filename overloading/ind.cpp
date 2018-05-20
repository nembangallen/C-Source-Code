#include<iostream>
using namespace std;
const int SIZE=10;
class safeArray
{
  private:
  	int arr[SIZE];
  public:
  	safeArray()
  	{
  		int i;
  		for (i = 0; i < SIZE; i++)
  		{
  			arr[i]=i;
  		}
  	}

  	int operator[](int index)
  	{
  		if (index >= SIZE-1)
  		{
  			cout<<"index out of bounds"<<endl;
  			return arr[0];
  		}else{
  			return arr[index];
  		}
  	}
};

int main()
{	
	
	safeArray A;  // Object is created and constructor is call

	cout<<"Value of A[0]: "<<A[0]<<endl;
	cout<<"Value of A[2]: "<<A[2]<<endl;
	cout<<"Value of A[10]: "<<A[10]<<endl;
	cout<<"Value of A[12]: "<<A[12]<<endl;
	return 0;
}