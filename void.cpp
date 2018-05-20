#include<iostream>
using namespace std;

int main()
{
	int value = 5;
	float f=2.78;
	void *voidPtr = &value;

	//cout << *voidPtr << endl; // illegal: cannot dereference a void pointer

	int *intPtr = static_cast<int*>(voidPtr); // however, if we cast our void pointer to an int pointer...
	cout << *intPtr << endl; // then we can dereference it like normal
	float *floatPtr = static_cast<float*>(voidPtr);
	cout<< *floatPtr <<endl;

}