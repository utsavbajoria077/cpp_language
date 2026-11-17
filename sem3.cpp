#include<iostream>
#include<algorithm>
using namespace std;

class demo
{
public:
	string data;
	virtual void calculate()
	{
		cout<<data<<endl;
	}
};
class result:public demo
{
public:
	int l;
	void calculate()
	{
		l=data.length();
		try
		{
			if(l>15)
				throw l;
			cout<<l<<endl;

			sort(data.begin(), data.end());
			cout<<data;
		}
		catch(int x)
		{
			cout<<"length exceeds"<<endl;
		}
	}
};

int main()
{
	string data;
	result r;
	r.data="utsav bajoria";
	demo *ptr;

	ptr=&r;
	ptr->calculate();
}
