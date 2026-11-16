#include<iostream>
using namespace std;

class person
{
public:
	int age;
	string name;
	void input()
	{
		cout<<"enter age:";
		cin>>age;
		cout<<"enter name";
		cin>>name;
	}
	void display()
	{
		cout<<"name:"<<name<<endl;
		cout<<"age:"<<age<<endl;
	}

};

class student:virtual public person
{
public:
	int roll;
	void inputs()
	{
		cout<<"enter roll:";
		cin>>roll;
	}
};

class sport:virtual public person
{
public:
	int sportsmarks;
	void inputss()
	{
		cout<<"enter sportsmarks:";
		cin>>sportsmarks;
	}
};

class result:public student,public sport
{
public:
	int academicmarks;
	int total;
	void inputa()
	{
		cout<<"enter academicmarks:";
		cin>>academicmarks;
	}
	void calculate()
	{
		total=sportsmarks+academicmarks;
	}
	void displayresult()
	{
		display();
		cout<<"total marks:"<<total;
	}
};

int main()
{
	result r;
	r.input();
	r.inputs();
	r.inputss();
	r.inputa();
	r.calculate();
	r.displayresult();
}
