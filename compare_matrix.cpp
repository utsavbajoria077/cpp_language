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
	friend void compare(Matrix1,Matrix2);
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
	friend void compare(Matrix1,Matrix2);
};
void compare(Matrix1 m1,Matrix2 m2)
{
    int flag=0;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			if(m1.mat1[i][j]!=m2.mat2[i][j])
			{
			    flag=1;
			    break;
			}
		}
	}
	cout<<"result:"<<endl;
	if(flag==0)
	{
	    cout<<"matrix 1 and matrix 2 are equal..";
	}
	else
	{
	    cout<<"matrix 1 and matrix 2 are not equal..";
	}
}
int main()
{
	Matrix1 m1;
	Matrix2 m2;
	m1.input();
	m2.input();
	compare(m1,m2);
}
