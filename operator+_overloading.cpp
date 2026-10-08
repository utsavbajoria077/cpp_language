#include<iostream>
using namespace std;

class Time
{
    private:
        int hours,minutes,secounds;
    public:
        Time(int h=0,int m=0,int s=0)
        {
            hours=h;
            minutes=m;
            secounds=s;
        }
        Time operator +(Time t)
        {
            Time temp;
            temp.secounds=secounds+t.secounds;
            temp.minutes=minutes+t.minutes;
            temp.hours=hours+t.hours;
            if(temp.secounds>=60)
            {
                temp.secounds=temp.secounds-60;
                temp.minutes=1+temp.minutes;
            }
            
            if(temp.minutes>=60)
            {
                temp.minutes-=60;
                temp.hours=1+temp.hours;
            }
            
            return temp;
        }
        void display()
        {
            cout<<hours<<":"<<minutes<<":"<<secounds;
        }
};
int main()
{
    Time t1(2, 45, 50);
    Time t2(3, 30, 25);

    Time t3 = t1 + t2;

    t3.display();

    return 0;
}
