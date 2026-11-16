#include<iostream>
using namespace std;

class employee
{
    public:
        virtual void salary()
        {
            cout<<"salary badha do...{:"<<endl;
        }
};

class manager:public employee
{
    public:
        void salary()
        {
            cout<<"salary nhi badhegi...{:"<<endl;
        }
};

int main()
{
    employee *e;
    manager m;

    e = &m;

    e->salary();

    return 0;
}
