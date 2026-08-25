#include<iostream>
using namespace std;

class SavingsAccount
{
    private:
    float SB;
    static float AIR;
    
    public:
    SavingsAccount(float balance)
    {
    SB=balance;
    }
    
    void calculateMonthlyInterest()
    {
        float MI;
        MI=(SB*AIR/100)/12;
        SB=MI+SB;
    }
    static void modifyInterestRate(float newRate)
    {   
        AIR=newRate;
    }
    void display()
    {
        cout<<"balance:"<<SB<<"$"<<endl;
    }
};

float SavingsAccount::AIR = 0;

int main()
{
    SavingsAccount saver1(2000);
    SavingsAccount saver2(3000);
    
    SavingsAccount::modifyInterestRate(4);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    
    printf("when Intrest is 4%:\n");
    saver1.display();
    saver2.display();
    
    SavingsAccount::modifyInterestRate(5);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    
    printf("\nwhen Intrest is 5%:\n");
    saver1.display();
    saver2.display();
}
