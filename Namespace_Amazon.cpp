#include <iostream>
using namespace std;

namespace Amazon
{
    class Azproducts
    {
    private:
        int id;
        char name[50];
        float price, discount, netpayment;
        
        static int totalProducts;


    public:
        Azproducts()
        {
            totalProducts++;
        }
        
        void inputInfo()
        {
            cout << "Enter id: ";
            cin >> id;

            cout << "Enter name: ";
            cin >> name;

            cout << "Enter price: ";
            cin >> price;

            cout << "Enter discount: ";
            cin >> discount;
        }

        void displayInfo()
        {
            cout << "Id: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Price: " << price << endl;
            cout << "Discount: " << discount << "%" << endl;
            cout << "Net Payment: " << netpayment << endl;
        }

        void applyDiscount()
        {
            netpayment = price - (price * discount / 100);
        }
        static void showTotalProducts()
        {
            cout << "\nTotal Products: " << totalProducts << endl;
        }
    };
    int Azproducts::totalProducts = 0;
}


int main()
{
    int n;
    cout<<"enter number of products:";
    cin>>n;
    Amazon::Azproducts p[n];
    
    for(int i=0;i<n;i++)
    {   
        cout<<"\nenter details for product"<<i+1<<":"<<endl;
        p[i].inputInfo();
        p[i].applyDiscount();
        p[i].displayInfo();
    }
    Amazon::Azproducts::showTotalProducts();
    return 0;
}
