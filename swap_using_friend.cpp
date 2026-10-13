#include<iostream>
using namespace std;

class  two;
class one
{
    private:
        int a;
    public:
        void input()
        {
            cout<<"enter value of a:";
            cin>>a;
        }
        friend void swap(one,two);
};
class two
{
    private:
        int b;
    public:
        void input()
        {
            cout<<"enter value of b:";
            cin>>b;
        }
        friend void swap(one,two);
};

void swap(one o,two t)
{
    int temp;
    
    temp=o.a;
    o.a=t.b;
    t.b=temp;
    
    cout<<"a="<<o.a<<","<<"b="<<t.b;
    
}

int main()
{
    one o;
    two t;
    o.input();
    t.input();
    swap(o,t);
}
