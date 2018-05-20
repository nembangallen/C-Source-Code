#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
	int pid;
	pid = getpid();
	cout<<"The process id is:"<<pid<<endl;
	return 0;
}