#include<iostream>
using namespace std;
#include<stdlib.h>

class temprature
{
    public:
    float temp,c,f;
    
    void inputinfo()
    {
        int choice;
        cout<<"\n2.in celcius\n1.in fareheneit\n";
        while(1)
        {
            cout<<"enter choice:";
            cin>>choice;
            switch(choice)
            {
                case 1:
                    cout<<"enter temprature in celcius:";
                    cin>>temp;
                     f=1.8*temp+32;
                    cout<<"in fareheneit:"<<f<<"°"<<endl;
                    break;
                case 2:
                    cout<<"enter temprature in fareheneit:";
                    cin>>temp;
                    c=(5.0/9.0)*(temp-32);
                    cout<<"in celcius:"<<c<<"°F"<<endl;
                    break;
                case 3:
                    exit(0);
                default:
                    cout<<"Invalid Choice...";
                    break;
            }
        }
    }
};
int main()
{
    
    temprature t;
    t.inputinfo();
}
