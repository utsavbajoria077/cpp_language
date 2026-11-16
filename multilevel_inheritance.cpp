#include<iostream>
using namespace std;

class academic
{
public:
	int marks;
};

class sports
{
public:
	int marks;

};

class result:public academic,public sports
{
public:
	void total()
	{
		int result1;
		result1=academic::marks+sports::marks;
		cout<<"total marks:"<<result1;
	}
};

int main()
{
	result r;
	r.academic::marks=40;
	r.sports::marks=50;
	r.total();
}
