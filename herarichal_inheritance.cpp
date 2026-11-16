#include<iostream>
using namespace std;

class shape
{
public:
	void areainfo()
	{
		cout<<"areas:"<<endl;
	}
};
class circle:public shape
{
public:
	int r;
	void calc()
	{
		double area;
		area=3.14*r*r;
		cout<<area<<endl;
	}
};

class rectangle:public shape
{
public:
	int l,b;
	void calc()
	{
		int area;
		area=l*b;
		cout<<area;
	}
};

int main()
{
    rectangle f;
	circle c;
    f.l=5;
	f.b=4;
	c.r=10;
	c.calc();
	f.calc();

}
