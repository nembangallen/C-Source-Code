/* Non-type parameters for templates
 */
#include<iostream>
using namespace std;
template <class T,int N>
class Test{
private:
	T array[N];
public:
	void set(int x, T value);
	T get(int x);
};

template<class T,int N>
void Test<T,N>::set(int x, T value)
{
	array[x]=value;
}
template<class T,int N>
T Test<T,N>::get(int x)
{
	return array[x];
}

int main()
{
	Test<int,5> myInt;
	Test<double,5>myFloat;
	myInt.set(0,100);
	myFloat.set(3,3.1416);
	cout<<myInt.get(0)<<"\n";
	cout<<myFloat.get(3)<<"\n";
	return 0;
}