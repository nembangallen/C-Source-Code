#include<iostream>
using namespace std;
// void f1();
// int main()
// {
// 	f1();
// 	f1();

// 	return 0;
// }

// void f1()
// {
// 	// int i=0;
// 	static int i;
// 	i++;
// 	cout<<"i ="<<i<<endl;
// }

class Account{
private:
	int balance;
	static float roi;
public:
	void setBalance(int b)
	{
		balance=b;
	}
};
float Account::roi;
int main()
{
	Account a1;
}