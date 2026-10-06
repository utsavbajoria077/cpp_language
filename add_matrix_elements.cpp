/*Q2. Write a C++ program to create two classes, Matrix1 and Matrix2.Each class should contain a 2D integer array of size 3 × 3.
Write a common friend function addMatrix() that can access the private members of both classes.
The friend function should:
Add the corresponding elements of the two matrices.
Store the result in a third 2D array.
Display the resulting matrix.
*/
#include<iostream>
using namespace std;

class Matrix2;
class Matrix1
{
private:
	int mat1[3][3];
public:
	void input()
	{
	    cout<<"Enter elements of Matrix 1:"<<endl;
		for(int i=0; i<3; i++)
		{
			for(int j=0; j<3; j++)
			{
				cin>>mat1[i][j];
			}
		}
	}
	friend void add(Matrix1,Matrix2);
};
class Matrix2
{
private:
	int mat2[3][3];
public:
	void input()
	{
	    cout<<"Enter elements of Matrix 2:"<<endl;
		for(int i=0; i<3; i++)
		{
			for(int j=0; j<3; j++)
			{
				cin>>mat2[i][j];
			}
		}
	}
	friend void add(Matrix1,Matrix2);
};
void add(Matrix1 m1,Matrix2 m2)
{
	int result[3][3];
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			result[i][j]=m1.mat1[i][j]+m2.mat2[i][j];
		}
	}
	cout<<"result:"<<endl;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cout<<result[i][j]<<"\t";
		}
		cout<<endl;
	}
}
int main()
{
	Matrix1 m1;
	Matrix2 m2;
	m1.input();
	m2.input();
	add(m1,m2);
}
