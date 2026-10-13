#include<iostream>
using namespace std;

class Complex
{
    private:
        int real,imagi;
    public:
        Complex()
        {
            real=0;
            imagi=0;
        }
        Complex (int r)
        {
            real=r;
            imagi=0;
        }
        Complex (int r,int i)
        {
            real=r;
            imagi=i;
        }
        void display()
        {
            cout<<real<<"+"<<imagi<<"i"<<endl;
        }
};
int main()
{
    Complex c;
    c.display();
    Complex c1(10);
    c1.display();
    Complex c2(10,5);
    c2.display();
}
