/*
3.Write a program to find the transpose of a given matrix using the friend function.
*/
#include <iostream>
#include <conio.h>
using namespace std;

class Matrix{
private:
	int m,n, matrix[10][10],i,j;
public:
	friend int tran(Matrix);
	Matrix(int a, int b){
		m=a;
		n=b;
	}

	void matset(){
		cout <<"enter the elements in matrix (row by row):\n";

		for(i=0; i<m; i++){
			for(j=0; j<n; j++){
				cin >> matrix[i][j];
			}
		}	
	}
	void matshow(){
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				cout << matrix[i][j]<<" ";
			}
			cout <<endl;
		}
	}

	
};

int tran(Matrix mtv){
	int i,j, mat2[10][10];
	for(i=0;i<mtv.m;i++){
		for(j=0;j<mtv.n;j++){
			mat2[i][j] = mtv.matrix[j][i];
		}
	}
	for(i=0;i<mtv.m;i++){
		for(j=0;j<mtv.n;j++){
			mtv.matrix[i][j] = mat2[i][j];
		}
	}

	for(i=0;i<mtv.m;i++){
		for(j=0;j<mtv.n;j++){
			cout << mtv.matrix[i][j];
		}
		cout << endl;
	}
	return 0;
}

int main(){
	int n,m,i,j;
	cout << "matrix of what order do you want ? (mxn)\n";
	cin >> m;
	cin >> n;
	Matrix mt(m,n);
	mt.matset();
	cout << "matrix just entered: "<<endl;
	mt.matshow();
	cout << "matrix after transpose"<<endl;
	tran(&mt);
	mt.matshow();
	return 0;
}
