#include <iostream>
using namespace std;
class rectangle
{
    private:
        float length,breadth;
        float area,perimeter;
    public:
    rectangle(float l,float b)
    {
        length=l ;
        breadth=b ;
    }
    void calculate()
    {
        area=length*breadth;
        perimeter=2*(length+breadth);
    }
    void display()
    {
        cout<<"Area="<<area<<endl;
        cout<<"Perimeter"<<perimeter<<endl;
    }
};
int main()
{
    float l,b;
       cout<<"enter length:";
        cin>>l;
        cout<<"enter breadth:";
        cin>>b;
    rectangle r(l,b);
    r.calculate();
    r.display();
}
