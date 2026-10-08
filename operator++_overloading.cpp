#include<iostream>
using namespace std;

class Counter
{
    private:
        int integer;
    public:
        Counter(int i=0)
        {
            integer=i;
        }
        Counter operator ++()
        {
           ++integer;
           return *this;
        }
        void display()
        {
            cout<<integer;
        }
};
int main()
{
    Counter c(45);
    ++c;
    
    c.display();
}
