#include<iostream>
using namespace std;

int main()
{
    int age=18;
    try
    {
        if(age<18)
        throw age;
        cout<<"valid age:"<<age;
    }
    catch(int x)
    {
        cout<<"not eligible:"<<age<<endl;
    }
}
