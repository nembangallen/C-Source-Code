#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int Num, Sum=0, LM=0, MAX=0, SumTool=10, X=0, NumDup;
	double AV=0;

	cout<<"Enter a positive integer: ";
	cin>>Num;

	if(Num < 0)
	{
		Num*=-1;
		cout<<"\nNotice: Number converted to positive \""<<Num<<"\"."
			<<endl;
	}
	NumDup=Num;
	while(NumDup != 0)
	{
		LM = NumDup;
		NumDup/=10;
		X++;
	}
	// NumDup=Num;
	// while(NumDup != 0)
	// {
	// 	Sum+=(NumDup%10);
	// 	NumDup/=10;
	// }

	// NumDup=Num;
	// while(NumDup != 0)
	// {
	// 	NumDup/=10;
	// 	X++;
	// }

	// NumDup=Num;
	// while(NumDup > MAX)
	// {
	// 	if(MAX < NumDup)
	// 		MAX= Num%SumTool;
	// 	NumDup/=10.0;
	// }


	// cout<<"The Sum is "<<Sum
	// 	<<"\nThe average is "<<setprecision(2)<<fixed
	// 	<<showpoint<<(double)Sum/X<<endl;
	cout<<"The leftmost digit is "<<LM<<endl;
		// <<"\nThe maximum is "<<MAX<<endl;

	return 0;
}