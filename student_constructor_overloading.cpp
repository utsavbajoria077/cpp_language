#include<iostream>
#include<string>
using namespace std;


class student
{
    private:
        int marks;
        string name;
    public:
        student(int m,string n)
        {
            marks=m;
            name=n;
        }
        student()
        {
            marks=100;
            name="xyz";
        }
        void display()
        {
            cout<<"marks:"<<marks<<endl;
            cout<<"name:"<<name<<endl;
        }
};
int main()
{
    student s(200,"utsav");
    s.display();
    student s1;
    s1.display();
}
