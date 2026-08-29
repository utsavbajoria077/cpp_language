#include <iostream>
using namespace std;

namespace Amazon
{
    class Azproduct
    {
    private:
        int productId;
        char productName[50];
        float price, discount, netpayment;
        static int totalProducts;

    public:
        Azproduct()
        {
            totalProducts++;
        }

        void inputInfo()
        {
            cout << "Enter Product ID: ";
            cin >> productId;

            cout << "Enter Product Name: ";
            cin >> productName;

            cout << "Enter Price: ";
            cin >> price;

            cout << "Enter Discount (%): ";
            cin >> discount;
        }

        void applyDiscount()
        {
            netpayment = price - (price * discount / 100);
        }

        void displayInfo()
        {
            cout << "Product ID: " << productId << endl;
            cout << "Product Name: " << productName << endl;
            cout << "Price: " << price << endl;
            cout << "Discount: " << discount << "%" << endl;
            cout << "Net Payment: " << netpayment << endl;
        }

        static void showTotalProducts()
        {
            cout << "Total Amazon Products: " << totalProducts << endl;
        }

        const char* getName()
        {
            return productName;
        }

        float getNetPayment()
        {
            return netpayment;
        }
    };

    int Azproduct::totalProducts = 0;
}

namespace FlipKart
{
    class Ftproduct
    {
    private:
        int productId;
        char productName[50];
        float price, discount, netpayment;
        static int totalProducts;

    public:
        Ftproduct()
        {
            totalProducts++;
        }

        void inputInfo()
        {
            cout << "Enter Product ID: ";
            cin >> productId;

            cout << "Enter Product Name: ";
            cin >> productName;

            cout << "Enter Price: ";
            cin >> price;

            cout << "Enter Discount (%): ";
            cin >> discount;
        }

        void applyDiscount()
        {
            netpayment = price - (price * discount / 100);
        }

        void displayInfo()
        {
            cout << "Product ID: " << productId << endl;
            cout << "Product Name: " << productName << endl;
            cout << "Price: " << price << endl;
            cout << "Discount: " << discount << "%" << endl;
            cout << "Net Payment: " << netpayment << endl;
        }

        static void showTotalProducts()
        {
            cout << "Total FlipKart Products: " << totalProducts << endl;
        }

        const char* getName()
        {
            return productName;
        }

        float getNetPayment()
        {
            return netpayment;
        }
    };

    int Ftproduct::totalProducts = 0;
}

namespace CompareRate
{
    class ProductCompare
    {
    private:
        static int azCount;
        static int ftCount;

    public:
        static void bestDeal(Amazon::Azproduct &az,
                             FlipKart::Ftproduct &ft)
        {
            cout << "\nAmazon Product" << endl;
            az.displayInfo();

            cout << "\nFlipKart Product" << endl;
            ft.displayInfo();

            cout << "\nBest Deal" << endl;

            if(az.getNetPayment() < ft.getNetPayment())
            {
                cout << "Amazon offers the lower price." << endl;
                azCount++;
            }
            else if(ft.getNetPayment() < az.getNetPayment())
            {
                cout << "FlipKart offers the lower price." << endl;
                ftCount++;
            }
            else
            {
                cout << "Both companies offer the same price." << endl;
            }
        }

        static void lowerPriceStatus()
        {
            cout << "\nAmazon lower-price count: " << azCount << endl;
            cout << "FlipKart lower-price count: " << ftCount << endl;

            if(azCount > ftCount)
            {
                cout << "Amazon has offered lower prices more times." << endl;
            }
            else if(ftCount > azCount)
            {
                cout << "FlipKart has offered lower prices more times." << endl;
            }
            else
            {
                cout << "Both companies have the same lower-price count." << endl;
            }
        }
    };

    int ProductCompare::azCount = 0;
    int ProductCompare::ftCount = 0;
}

int main()
{
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    Amazon::Azproduct az[n];
    FlipKart::Ftproduct ft[n];

    cout << "\nAmazon Products" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter details for Product " << i + 1 << endl;
        az[i].inputInfo();
        az[i].applyDiscount();
    }

    cout << "\nFlipKart Products" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter details for Product " << i + 1 << endl;
        ft[i].inputInfo();
        ft[i].applyDiscount();
    }

    int choice;

    do
    {
        cout << "\n\n1. Display Product Details";
        cout << "\n2. Display Number of Products Created";
        cout << "\n3. Compare Best Deal";
        cout << "\n4. Lower-Price Status";
        cout << "\n5. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                int company;

                cout << "\n1. Amazon";
                cout << "\n2. FlipKart";
                cout << "\nEnter company choice: ";
                cin >> company;

                if(company == 1)
                {
                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nAmazon Product " << i + 1 << endl;
                        az[i].displayInfo();
                    }
                }
                else if(company == 2)
                {
                    for(int i = 0; i < n; i++)
                    {
                        cout << "\nFlipKart Product " << i + 1 << endl;
                        ft[i].displayInfo();
                    }
                }
                else
                {
                    cout << "Invalid choice!" << endl;
                }

                break;
            }

            case 2:
            {
                int company;

                cout << "\n1. Amazon";
                cout << "\n2. FlipKart";
                cout << "\nEnter company choice: ";
                cin >> company;

                if(company == 1)
                {
                    Amazon::Azproduct::showTotalProducts();
                }
                else if(company == 2)
                {
                    FlipKart::Ftproduct::showTotalProducts();
                }
                else
                {
                    cout << "Invalid choice!" << endl;
                }

                break;
            }

            case 3:
            {
                int productNo;

                cout << "Enter product number to compare: ";
                cin >> productNo;

                if(productNo >= 1 && productNo <= n)
                {
                    CompareRate::ProductCompare::bestDeal(
                        az[productNo - 1],
                        ft[productNo - 1]
                    );
                }
                else
                {
                    cout << "Invalid product number!" << endl;
                }

                break;
            }

            case 4:
            {
                CompareRate::ProductCompare::lowerPriceStatus();
                break;
            }

            case 5:
                cout << "Program ended." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while(choice != 5);

    return 0;
}
